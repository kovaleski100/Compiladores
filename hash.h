#ifndef HASH_H_
#define HASH_H_

#include "tree.h"

// Hash table size 
#define HASH_SIZE 1000

// Store the values of the hash table elements
// typedef struct hash_symbol{
//     // Non-function
//     int location;
//     token_type nature;
//     literal_type type;
//     uint vet_size;
//     int type_size;
//     hash_symbol* function_param;
//     symbol val;
//     // For functions    

// } hash_element;

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


// A table that contains: a key and an element
typedef struct HashTable{
    unsigned int count;
    unsigned int limit;
    Table* table;
} HashTable;

HashTable* create_table();
Table* findSymbolTable(Table* table, int limit, Key* key);
bool insertSymbol(HashTable table, symbol s);
static void allocate_capacity(HashTable* table, uint newLimit);

#endif // HASH_H_