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

enum literais
{
    falso,
    verdadeiro,
    inteiro,
    caracter,
    flutuante 
};

union tipo_literal
{
    int inteiro;
    char *caracter;
    float flutuante;
    bool booleano;
};

typedef struct valor_lexico
{
    int numero_linha;
    char *valor_token;
    int tipo_token;
    union tipo_literal literal;
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
void print_nodo(ast *arvore);
void libera(ast *arvore);
void exporta(ast *arvore);
valor_lexico* cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal);