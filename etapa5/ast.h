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
    LOADAI,
    STORE,
    STOREAI,
    VARIABLE
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
} tipo_literal;

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

typedef enum
{
    TEMPORARY,
    CONSTANT,
    LABEL
} ArgType;

typedef struct ILOCArg
{
    ArgType type;
    union
    {
        int value;
        char *name;
    } data;
} ILOCArg;

typedef struct ast
{
    valor_lexico *valor_lexico;
    struct ast **filho;
    int num_filhos;
    int tipo_nodo;
    ILOCArg *result;
    /* data */
} ast;

typedef struct ILOCOperation
{
    int opType;
    ILOCArg *input1;
    ILOCArg *input2;
    ILOCArg *output;
} ILOCOperation;

typedef struct ILOCOperationList
{
    ILOCOperation *instrucao;
    struct ILOCOperationList *next;
} ILOCOperationList;

// typedef struct ILOCLIST
// {
//     ILOCSTRUCT *instrucao;
//     struct ILOCLIST *next;

//     /* data */
// }ILOCLISTSTRUCT;

ast *create_node(int tipo, valor_lexico *valor);
ast *create_leaf(int tipo, valor_lexico *valor);
ast *add_child(ast *arvore, ast *nodo);
void print_dados(ast *arvore);
void print_nodo(ast *arvore);
void libera(void *arvore);
void exporta(ast *arvore);
void destroiVL(valor_lexico *valor);
void destroiNodo(ast *arvore);
valor_lexico *cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal);
void adiciona_operacao(ILOCOperationList **list, int opType, ILOCArg *input1, ILOCArg *input2, ILOCArg *output);
ILOCArg *create_arg(ArgType type, int value, char *name);
//ILOCArg *create_arg(int type, int offset, char *name);
void free_arg(ILOCArg *arg);
void gera_codigo_iloc_op_binario(char op, ast *left, ast *right, ILOCOperationList **iloc_list);
void print_operation_list(ILOCOperationList *list);
void gera_codigo_iloc_decl_var(ast *var_ast, ILOCOperationList **iloc_list, int frame_pointer_offset);