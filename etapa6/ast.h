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
    operador_simples,
    call,
    arranjo,
    ADDITION,
    SUBTRACTION,
};

enum iloctype
{
    ADD,
    SUB,
    DIV,
    MULT,
    AND,
    OR,
    MENORIGUAL,
    MAIORIGUAL,
    MENORQUE,
    MAIORQUE,
    IGUAL,
    ATRUBUICAO,
    IF,
    IFELSE,
    WHILE,
    FUNCAO,
    LOAD,
    STORE
};

enum natureza
{
    litetal,
    funcao,
    arranjoN,
    variavel
};

enum literais
{
    falso,
    verdadeiro,
    inteiro,
    caracter,
    flutuante,
    nulo,
    booleano
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

typedef enum {
    TEMP,
    CONST,
    LABEL
} Argtipo;

typedef struct  ILOCArg {
    int tipo;
    union {
        int value;
        char* name;
    } dados;
} ILOCArg;

typedef struct ast
{
    valor_lexico *valor_lexico;
    struct ast **filho;
    int num_filhos;
    int tipo_nodo;
    ILOCArg* result;
    /* data */
} ast;

typedef struct operacaoIloc {
    int opType;
    ILOCArg* input1;
    ILOCArg* input2;
    ILOCArg* output;
} ILOCOperation;

typedef struct  ILOCOperationList{
    ILOCOperation* instrucao;
    struct ILOCOperationList* next;
} ILOCOperationList;


// typedef struct ILOCLIST
// {
//     ILOCSTRUCT *instrucao;
//     struct ILOCLIST *next;
    
//     /* data */
// }ILOCLISTSTRUCT;

ast* create_node(int tipo, valor_lexico *valor);
ast* create_leaf(int tipo, valor_lexico *valor);
ast* add_child(ast *arvore, ast *nodo);
void print_dados(ast *arvore);
void print_nodo(ast *arvore);
void libera(void *arvore);
void exporta(ast *arvore);
void destroiVL(valor_lexico *valor);
void destroiNodo(ast *arvore);
valor_lexico* cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal);
void add_op(ILOCOperationList** list, int opType, ILOCArg* input1, ILOCArg* input2, ILOCArg* output);
ILOCArg* create_arg(int type, int value, char* name);
void free_arg(ILOCArg* arg);
void free_operation_list(ILOCOperationList* list);
void gera_iloc_para_op_bin(char op, ast *left, ast *right, ILOCOperationList **iloc_list);