#ifndef STACK
#define STACK
#include "hash.h"

typedef struct stack
{
    HashTable *hash;
    struct stack *next;
    
}stack;

void printStack(stack *s);
void push(stack **s, HashTable* hash);
void pushTable(stack **S);
HashTable* pop(stack **s);
void destroyStack(stack *s);
Table* search(stack* top, symbol s);
void declareVar(stack* stack, int size, literal_type type, nature n, int line, value v, char* lexema);
void declareFunc(stack* stack, int size, literal_type type, nature n, int line, value v, char* lexema);
void assignVar(stack* stack, symbol* var, symbol* value);
void assignVector(stack* stack, symbol* var, symbol* value);
void callFunction(stack* stack, symbol* funName);


#endif