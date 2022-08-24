#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <string.h>
#include "symbol.h"
#include <stdlib.h>

typedef struct tree
{
    symbol *data;
    int child_number;
    struct tree** child; //copy of pointer to create an n-ary tree
} tree;

tree* empty_tree();
tree* insert_leaf(symbol *data);
tree* insert_child(tree* t, tree* tc);
tree* create_insert_child(token_type type, tree * t, tree * child);
void print_data(symbol *data);
void print_tree(tree * t);
void libera(tree * t);
void exporta(tree * t);
char * prepend(char* string_var, const char* prepend_string);

#endif
