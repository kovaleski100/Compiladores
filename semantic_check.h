#include <stdio.h>
#include <stdlib.h>
#include "errors.h"
#include "tree.h"
#include "stack.h"

#define NUMERIC 10

int type_infer(stack* scope, tree* op1, tree* op2);
int type_check(stack* scope, int expected, tree* ast);
void input_type_check(stack* scope, tree* ast);
void output_type_check(tree* ast);
void declaration_check(stack* scope, tree* ast);
void usage_check(stack* scope, tree* ast, int nature);
