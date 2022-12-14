/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/
#ifndef HASH_H_
#define HASH_H_

#include "tree.h"
#include "utils.h"

#define HASH_SIZE 1000

typedef struct Key
{
    unsigned int number;
    char* key_name;
    int size;
} Key;


typedef struct Table
{
    Key* key;
    symbol* data;
}Table ;


typedef struct HashTable{
    unsigned int count;
    unsigned int limit;
    Table* table;
} HashTable;

HashTable* create_table();
Table* findSymbolTable(Table* table, int limit, Key* key);
bool insertSymbol(HashTable* table, symbol s);
static void allocate_capacity(HashTable* table, uint newLimit);
symbol create_symbol(int size_mult, literal_type type, nature n, int line, value v, char* lexema);
uint hashString(char * str, int size, int limit);
Table* searchSymbolTable(HashTable* hash, symbol s);
#endif