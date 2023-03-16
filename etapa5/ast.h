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
    TEMPORARY,
    CONSTANT,
    LABEL
} ArgType;

typedef struct  ILOCArg {
    ArgType type;
    union {
        int value;
        char* name;
    } data;
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



#include <stdlib.h>
#include <string.h>

typedef enum {
    // Adicione aqui os tipos de operações ILOC que você precisa, por exemplo:
    ADD,
    SUB,
    MULT,
    LOAD,
    STORE,
    // ...
} ILOCOpType;

typedef struct ILOCOperation {
    ILOCOpType opType;
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


void add_operation(ILOCOperationList* list, ILOCOpType opType, ILOCArg* input1, ILOCArg* input2, ILOCArg* output);
ILOCArg* create_arg(ArgType type, int value, char* name);
void free_arg(ILOCArg* arg);
void free_operation_list(ILOCOperationList* list);
void generate_iloc_code_for_binary_op(char op, ast *left, ast *right, ILOCOperationList *iloc_list);
void generate_iloc_code(ast* node, ILOCOperationList** iloc_list);