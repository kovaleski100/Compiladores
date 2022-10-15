/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

/* Foi usada a seguinte representação de árvore n-ária: https://blog.mozilla.org/nnethercote/2012/03/07/n-ary-trees-in-c/ */

#ifndef AST_H
#define AST_H
#include "backpatch.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "code.h"

typedef struct CODE CODE;

typedef enum TOKEN_TYPE {
  NIL,
  INT,
  FLOAT,
  BOOL,
  CHAR,
  STRING
} TOKEN_TYPE;

typedef union TOKEN_VALUE {
  int intval;
  float floatval;
  char charval;
  char* strval;
} TOKEN_VALUE;

typedef struct TOKEN {
    int line;
    TOKEN_TYPE type;
    TOKEN_VALUE value;
} TOKEN;

typedef struct tree {
    int type;
    char* temp;
    PATCH* false;
    PATCH* true;
    CODE* code;
    TOKEN* value;
    struct AST* child;
    struct AST* sibling;
} tree;

void libera (void *arvore);
void exporta (void *arvore);

tree* new_ast(int child_count, ...);
tree* new_valued_ast(int type, TOKEN* value);
tree* chain_ast(tree* a, tree* b);

#endif