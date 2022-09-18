#ifndef STACK
#define STACK
#include "hash.h"

typedef struct stack
{
    HashTable *hash;
    struct stack *next;
    
}stack


#endif