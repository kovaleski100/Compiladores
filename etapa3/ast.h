#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

enum tipos_tokens
{
    caracter_especial,
    operador_composto,
    palavra_reservada,
    identificador,
    literal_inteiro,
    literal_float,
    literal_char,
    literal_bool,
    operador_unario,
    operador_simples
};
 
enum literais
{
    falso,
    verdadeiro,
    inteiro,
    caracter,
    flutuante,
    nulo
};

typedef union tipo_literal
{
    int d;
    char *s;
    float f;
    bool b;
}tipo_literal;

// typedef struct valor_token
// {
//     char *valor_token;
//     union tipo_literal *tl;
// }valor_token;

typedef struct valor_lexico
{
    int numero_linha;
    char *valorToken;
    int tipo_token;
    union tipo_literal literal;
    /* data */
} valor_lexico;

typedef struct ast
{
    valor_lexico *valor_lexico;
    struct ast **filho;
    int num_filhos;
    /* data */
} ast;

ast* create_node(int tipo, valor_lexico *valor);
ast* create_leaf(int tipo, valor_lexico *valor);
ast* add_child(ast *arvore, ast *nodo);
void print_dados(ast *arvore);
void print_nodo(ast *arvore);
void libera(ast *arvore);
void exporta(ast *arvore);
valor_lexico* cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal);