#ifndef HASH_H_
#define HASH_H_

#include "tree.h"

// Hash table size 
#define HASH_SIZE 1000

typedef struct hash_symbol
{
    int number;
    int type;
    struct hash_symbol *next;
} hash_symbol;

// Store the values of the hash table elements
typedef struct hash_element{
    // Non-function
    int location;
    token_type nature;
    literal_type type;
    uint vet_size;
    int type_size;
    hash_symbol* function_param;

    token_value val;
    // For functions    

} hash_element;

// A table that contains: a key and an element
typedef struct HashTable{
    int key[HASH_SIZE];
    hash_element value[HASH_SIZE];

} HashTable;

hash_symbol create_args();
HashTable create_table();
int set_type();
hash_element create_symbol(int size_mult, type t, hash_symbol *args, literal_value tv);
void set_symbol_type(hash_element *s, type t);
void set_symbol_size(hash_element *s, int size_mult);
uint hash(char * str);
void insert_symbol();
hash_element get_symbol(HashTable *table, char * string);
uint verify_symbol(HashTable *table, char *string);

#endif // HASH_H_