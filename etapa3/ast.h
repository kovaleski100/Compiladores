#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum tipos_tokens
{
    caracter_especial,
    operador_composto,
    palavra_reservada,
    identificador,
    literal
};

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
    char *valor_token;
    union Literal literal;
    /* data */
} valor_lexico;

typedef struct ast
{
    valor_lexico *valor_lexico;
    struct ast *filho;
    int tipo_token;
    int num_filhos;
    /* data */
} ast;

ast* create_node(int tipo, valor_lexico *valor);
ast* create_leaf(int tipo, valor_lexico *valor);
ast* add_child(ast *arvore, ast nodo);
void print_dados(ast *arvore);
void print_nodo(ast *arvore);
void libera(ast *arvore);
void exporta(ast *arvore);