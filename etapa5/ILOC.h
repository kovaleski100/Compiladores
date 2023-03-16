// #include <string.h>

// enum iloctype
// {
//     ADD,
// };

// typedef struct ILOC
// {
//     char* instrucao;
//     char* rotulo1;
//     char* rotulo2;
//     char* end1;
//     char* end2;
//     char* end3;
//     /* data */
// }ILOCSTRUCT;

// typedef struct ILOCLIST
// {
//     ILOCSTRUCT *instrucao;
//     struct ILOCLIST *next;
    
//     /* data */
// }ILOCLISTSTRUCT;

// char* criar_rotulo();
// void gera_codigo_not(); 
// char* gera_rotulo();
// char* gera_temporario();


//GPT
// #include <stdlib.h>
// #include <string.h>

// typedef enum {
//     TEMPORARY,
//     CONSTANT,
//     LABEL
// } ArgType;

// typedef struct {
//     ArgType type;
//     union {
//         int value;
//         char* name;
//     } data;
// } ILOCArg;

// typedef enum {
//     // Adicione aqui os tipos de operações ILOC que você precisa, por exemplo:
//     ADD,
//     SUB,
//     MULT,
//     LOAD,
//     STORE,
//     // ...
// } ILOCOpType;

// typedef struct ILOCOperation {
//     ILOCOpType opType;
//     ILOCArg* input1;
//     ILOCArg* input2;
//     ILOCArg* output;
//     struct ILOCOperation* next;
// } ILOCOperation;

// typedef struct {
//     ILOCOperation* head;
//     ILOCOperation* tail;
// } ILOCOperationList;

// void add_operation(ILOCOperationList* list, ILOCOpType opType, ILOCArg* input1, ILOCArg* input2, ILOCArg* output);
// ILOCArg* create_arg(ArgType type, int value, char* name);
// void free_arg(ILOCArg* arg);
// void free_operation_list(ILOCOperationList* list);
// void generate_iloc_code_for_binary_op(char op, ast *left, ast *right, ILOCOperationList *iloc_list);
// void generate_iloc_code(ast* node, ILOCOperationList* iloc_list);