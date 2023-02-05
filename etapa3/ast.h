#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

union Literal
{
    int d;
    float f;
    char *s;
    bool b;
};

typedef struct valor_lexico
{
    int numero_linha;
    int tipo_token;
    char *valor_token;
    union Literal literal;
    /* data */
} valor_lexico;

typedef struct ast
{
    valor_lexico *valor_lexico;
    struct ast *filho;
    int num_filhos;
    /* data */
} ast;

ast* create_node(int tipo, valor_lexico *valor);
ast* create_leaf(int tipo, valor_lexico *valor);
ast* add_child(ast *arvore, ast nodo);
void print_dados(ast *arvore);
void libera(ast *arvore);
void exporta(ast *arvore);