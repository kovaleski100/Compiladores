#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "hash.h"
#include "parser.tab.h"


HashTable* create_table()
{
    HashTable* table = malloc(sizeof(HashTable));
    table->count = 0;
    table->limit = 1024;
    table->table =  calloc(table->limit, sizeof(Table));

    return table;
}

Table* findSymbolTable(Table* tables, int limit, Key* key)
{
    unsigned int index = key->number % limit;
    while(1){
        Table* table = &tables[index];
        if(table->key == NULL || strcmp(table->key->key_name, key->key_name) == 0)
        {
            return table;
        }

        index = (index + 1) % limit;
    }
}

bool insert_symbol(HashTable* table, symbol s)
{
    if(table->count + 1 > table->limit/2) {
        //If the table is half full we double it's size for trying to avoid collitions
        int newLimit = GROW_CAPACITY(table->limit);
        allocate_capacity(table, newLimit);
    }

    Key key;
    key.key_name = s.lexema;
    key.size = strlen(s.lexema);
    key.number = hash_string(s.lexema, strlen(s.lexema), table->limit);

    Table* actualTable = findSymbolTable(table->table, table->limit, &key);
    bool is_new_key = !actualTable->key;

    if (is_new_key)
    {
        table->count ++;
    }

    actualTable->key = malloc(sizeof(key));
    actualTable->data = malloc(sizeof(symbol));

    //Copy key and symbol value
    *actualTable->key = key;
    *actualTable->data = s;

    return is_new_key;
}

static void allocate_capacity(HashTable* table, uint newLimit)
{
    Table* tables = ALLOCATE(table, newLimit);
    for (int i = 0; i < newLimit; i ++) {
        tables[i].key = NULL;
        tables[i].data = NULL;
    }

    table->count = 0;

    for(int i = 0; i < table->limit; i++)
    {
        Table* currentTable = &table->table[i];
        if(currentTable->key == NULL)
        {
            continue;
        }
        Table* dst = findSymbolTable(tables, newLimit, currentTable->key);
        // We need to recalculate the hash keys to resize the table
        dst->key = currentTable->key;
        dst->data = currentTable->data;

        table->count ++;
    }

    FREE_ARRAY(table, table->table, table->count);

    table->table = tables;
    table->limit = newLimit;
}




HashTable create_symbol(int size_mult, literal_value t, hash_symbol n, int line, value v, char * lexeme)
{ //For the hash table we calculate it's hash here, only once
    symbol s;
    s.location = line;
    s.nat = n;
    s.t_type = t;
    set_symbol_size(&s, size_mult);
    s.literal_value = v;
    s.lexeme = strdup(lexeme);
    return s;
}

void set_symbol_type(symbol *s, type t)
{
    s->t_type = t;
}

void set_symbol_size(symbol *s, int size_mult)
{
    switch(s->t_type)
    {
        case TYPE_UNKNOWN:
            break;
        case TYPE_UINT:
            s->size = 32 * size_mult;
            break;
        case TYPE_INT:
            s->size = 32 * size_mult;
            break;
        case TYPE_BOOL:
            s->size = 8 * size_mult;
            break;
        case TYPE_FLOAT:
            s->size = 64 * size_mult;
            break;
        case TYPE_CHAR:
            s->size = 8 * size_mult;
            break;
        case TYPE_STRING:
            s->size = 1 * size_mult;
            break;
    }
}

void destroy_table(symbol_table* table)
{
}

unsigned int hash_string(char *str, int size, int capacity)
{
    //FNV-1 Hash function
    //http://www.isthe.com/chongo/tech/comp/fnv/
    unsigned int hash = 2166136261u;

    for(int i = 0; i < size; i ++)
    {
        hash ^= (int8_t)str[i];
        hash *= 16777619;
    }

    return hash % capacity;
}





void transferTable(symbol_table* from, symbol_table* to)
{
    for (int i = 0; i < from->capacity; i++) {
        bucket* bucket = &from->buckets[i];
        if(bucket->key != NULL)
        {
            insert_symbol(to,(*bucket->data));
        }
    }
}




bucket* search_symbol_in_table(symbol_table* table, symbol s)
{
    bool exists;

    key_object key;
    key.key_string = s.lexeme;
    key.size = strlen(s.lexeme);
    key.hash_value = hash_string(s.lexeme, strlen(s.lexeme), table->capacity);

    bucket* actual_bucket = find_symbol_in_table(table->buckets, table->capacity, &key);

    exists = actual_bucket->key;

    if(exists)
    {
        return actual_bucket;
    }
    else
    {
        return NULL;
    }	
}