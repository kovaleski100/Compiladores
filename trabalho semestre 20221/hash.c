/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "hash.h"


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

bool insertSymbol(HashTable* table, symbol s)
{
    if(table->count + 1 > table->limit/2) {
        //If the table is half full we double it's size for trying to avoid collitions
        int newLimit = GROW_LIMIT(table->limit);
        allocate_capacity(table, newLimit);
    }

    Key key;
    key.key_name = s.lexema;
    key.size = strlen(s.lexema);
    key.number = hashString(s.lexema, strlen(s.lexema), table->limit);

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
    Table* tables = (Table*) reallocate(NULL, 0, sizeof(table) * (newLimit));
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




symbol create_symbol(int size_mult, literal_type type, nature n, int line, value v, char* lexema)
{ //For the hash table we calculate it's hash here, only once
    symbol s;
    s.line = line;
    s.nat = n;
    s.type = type;
    set_symbol_size(&s, size_mult);
    s.lv.v = v;
    s.lexema = strdup(lexema);
    return s;
}


unsigned int hashString(char *str, int size, int limit)
{
    //FNV-1 Hash function
    //http://www.isthe.com/chongo/tech/comp/fnv/
    unsigned int mod = 2166136261u;

    for(int i = 0; i < size; i ++)
    {
        mod ^= (int8_t)str[i];
        mod *= 16777619;
    }

    return mod % limit;
}

Table* searchSymbolTable(HashTable* table, symbol s)
{
    
    Key key;
    key.key_name = s.lexema;
    key.size = strlen(s.lexema);
    key.number = hashString(s.lexema, strlen(s.lexema), table->limit);

    Table* currTable = findSymbolTable(table->table, table->limit, &key);

    if(currTable->key)
    {
        return currTable;
    }
    else
    {
        return NULL;
    }
}

// void destroy_table(symbol_table* table)
// {
// }







// void transferTable(symbol_table* from, symbol_table* to)
// {
//     for (int i = 0; i < from->capacity; i++) {
//         bucket* bucket = &from->buckets[i];
//         if(bucket->key != NULL)
//         {
//             insert_symbol(to,(*bucket->data));
//         }
//     }
// }