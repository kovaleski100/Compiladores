#ifndef CODE_H
#define CODE_H

#include "tree.h"
#include "stack.h"
#include "iloc.h"

#define IMM 0
#define REG 1

typedef struct CODE {
    OPERATION* op;
    struct CODE* next;
} CODE;

int get_offset(HashTable* table, int type, int count);

CODE* new_code(OPERATION* op);
CODE* chain_op(CODE *list, OPERATION *op);
CODE* chain_code(CODE* list1, CODE* list2);

OPERATION* load_imm(stack* scope, tree* ast);
OPERATION* load_id(stack* scope, tree* ast);
OPERATION* load_array(stack* scope, tree* ast);
CODE* assignment(stack* scope, tree* dst, tree* src);
void arithmetic(int opcode, tree* expr1, tree* op, tree* expr2);

CODE* oc_or_expression(tree *ast1, tree *ast2, tree *ast3);
CODE* oc_and_expression(tree *ast1, tree *ast2, tree *ast3);
CODE* numeric_cmp_expression(int operation, char *temp1, char *temp2, tree *ast3, CODE *list);

void print_code(tree* ast);
void create_if_else(tree* node);

void create_while(tree* expression,tree* block,tree* tree);
#endif