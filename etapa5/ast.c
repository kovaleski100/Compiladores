#include "ast.h"

const char *get_op_name(int op)
{
    switch (op)
    {
    case ADD:
        return "add";
    case SUB:
        return "sub";
    case LOAD:
        return "load";
    case LOADAI:
        return "loadI";
    case STOREAI:
        return "storeI";
    case STORE:
        return "store";
    }
}

void print_arg(ILOCArg *arg)
{
    if (!arg)
        return;

    switch (arg->type)
    {
    case TEMPORARY:
        printf("%s", arg->data.name);
        break;
    case CONSTANT:
        printf("%d", arg->data.value);
        break;
    case LABEL:
        printf("L%s", arg->data.name);
        break;
    default:
        break;
    }
}

void print_operation_list(ILOCOperationList *list)
{
    ILOCOperationList *current = list;
    while (current != NULL)
    {
        ILOCOperation *op = current->instrucao;
        if (op)
        {
            printf("%s ", get_op_name(op->opType));
            print_arg(op->input1);
            if (op->input2)
            {
                printf(", ");
                print_arg(op->input2);
            }
            if (op->output)
            {
                printf(" => ");
                print_arg(op->output);
            }
            printf("\n");
        }
        current = current->next;
    }
}

ast *create_node(int tipo, valor_lexico *valor)
{
    //printf("Entrou create node \n");
    if (valor == NULL)
    {
        return NULL;
    }
    ast *node = (ast *)malloc(sizeof(ast));
    if (node == NULL)
    {
        return NULL;
    }
    node->filho = NULL;
    node->num_filhos = 0;
    node->valor_lexico = valor;
    node->valor_lexico->tipo_token = tipo;
    return node;
}

// ast* create_leaf(int tipo, valor_lexico valor); precisa?
ast *add_child(ast *arvore, ast *nodo)
{
    if (arvore == NULL)
    {
        return nodo;
    }
    arvore->filho = (ast **)realloc(arvore->filho, sizeof(arvore->filho) * (arvore->num_filhos + 1));
    if (arvore->filho == NULL)
    {
        return NULL;
    }
    arvore->filho[arvore->num_filhos] = nodo;
    arvore->num_filhos += 1;
    return arvore;
}

void exporta(ast *arvore)
{
    // print_nodo(arvore);
    // print_dados(arvore);
}

void print_nodo(ast *arvore)
{
    if (arvore == NULL)
    {
        return;
    }

    for (int i = 0; i < arvore->num_filhos; i++)
    {
        // ast *child = (ast*)malloc(sizeof(ast));
        // child = arvore->filho[i];
        print_nodo(arvore->filho[i]);
        if (arvore->filho[i] != NULL)
        {
            printf("%p, %p\n", arvore, arvore->filho[i]);
        }
    }
}

//acho que essa função tem que ser implementada conforme for ocorrendo os testes
void print_dados(ast *arvore)
{
    if (arvore == NULL)
        return;
    printf("%p ", arvore);
    switch (arvore->valor_lexico->tipo_token)
    {
    case caracter_especial:
        printf("[label = \"%s\" ]", arvore->valor_lexico->valorToken);
        break;
    case operador_composto:
        printf("[label = \"%s\" ]", arvore->valor_lexico->valorToken);
        break;
    case palavra_reservada:
        printf("[label = \"%s\" ]", arvore->valor_lexico->valorToken);
        break;
    case identificador:
        printf("[label = \"%s\" ]", arvore->valor_lexico->valorToken);
        break;
    case literal_bool:
        printf("[label = \"%s\" ]", arvore->valor_lexico->literal.b == true ? "TRUE" : "FALSE");
        break;
    case literal_char:
        printf("[label = \"%s\" ]", arvore->valor_lexico->literal.s);
        break;
    case literal_float:
        printf("[label = \"%f\" ]", arvore->valor_lexico->literal.f);
        break;
    case literal_inteiro:
        printf("[label = \"%d\" ]", arvore->valor_lexico->literal.d);
        break;
    case operador_unario:
        printf("[label = \"%s\" ]", arvore->valor_lexico->valorToken);
        break;
    case call:
        printf("[label = \"call %s\" ]", arvore->valor_lexico->valorToken);
        break;
    case arranjo:
        printf("[label = \"[]\" ]");
        break;
    }
    printf("\n");
    for (int i = 0; i < arvore->num_filhos; i++)
    {
        {
            print_dados(arvore->filho[i]);
        }
    }
}

void destroiNodo(ast *arvore)
{
    if (arvore == NULL)
    {
        return;
    }
    for (int i = 0; i < arvore->num_filhos; i++)
    {
        libera(arvore->filho[i]);
        arvore->filho[i] = NULL;
    }
    destroiVL(arvore->valor_lexico);
    arvore->valor_lexico = NULL;
    free(arvore->filho);
    free(arvore->valor_lexico);
    free(arvore);
}

void libera(void *arvore)
{
    destroiNodo((ast *)arvore);
}

void destroiVL(valor_lexico *vl)
{
    if (vl == NULL)
    {
        return;
    }
    if (vl->tipo_token == literal_char)
    {
        free(vl->literal.s);
    }
    free(vl->valorToken);
    free(vl);
}

valor_lexico *cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal)
{
    valor_lexico *vl = (valor_lexico *)malloc(sizeof(valor_lexico));
    if (vl == NULL)
    {
        return NULL;
    }
    memset(vl, 0, sizeof(valor_lexico)); //memset para evitar condicional erro

    vl->tipo_token = tipo_token;
    vl->numero_linha = current_line_number;
    if (tipo_token == literal_inteiro)
    {
        vl->literal.d = atoi(texto);
    }
    else if (tipo_token == literal_float)
    {
        vl->literal.f = atof(texto);
    }
    else if (tipo_token == literal_bool)
    {
        vl->literal.b = tipo_literal == falso ? false : true;
    }
    else if (tipo_token == literal_char)
    {
        vl->literal.s = strdup(texto);
    }
    else
    {
        vl->valorToken = strdup(texto);
    }
    return vl;
}

////////////////////// ILOOOOOC //////////////////

void adiciona_operacao(ILOCOperationList **list, int opType, ILOCArg *input1, ILOCArg *input2, ILOCArg *output)
{
    //printf("ADD operation");
    ILOCOperation *new_operation = malloc(sizeof(ILOCOperation));
    new_operation->opType = opType;
    new_operation->input1 = input1;
    new_operation->input2 = input2;
    new_operation->output = output;

    ILOCOperationList *new_node = malloc(sizeof(ILOCOperationList));
    new_node->instrucao = new_operation;
    new_node->next = NULL;

    if (*list == NULL)
    {
        *list = new_node;
    }
    else
    {
        ILOCOperationList *current = *list;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

ILOCArg *create_arg(ArgType type, int value, char *name)
{
    ILOCArg *arg = malloc(sizeof(ILOCArg));
    arg->type = type;
    if (type == CONSTANT)
    {
        arg->data.value = value;
    }
    else
    {
        arg->data.name = strdup(name);
    }
    return arg;
}

// ILOCArg *create_arg(ArgType type, int offset, char *name)
// {
//     ILOCArg *new_arg = malloc(sizeof(ILOCArg));
//     new_arg->type = type;
//     new_arg->data.offset = offset; // define o offset da variável local
//     if (name != NULL)
//     {
//         new_arg->data.name = strdup(name);
//     }
//     else
//     {
//         new_arg->data.name = NULL;
//     }
//     return new_arg;
// }

void free_arg(ILOCArg *arg)
{
    if (arg->type != CONSTANT)
    {
        free(arg->data.name);
    }
    free(arg);
}

// Função para gerar nomes de rótulos únicos
char *gera_rotulo()
{
    static int contador_rotulo = 0;
    static char rotulo[20];
    sprintf(rotulo, "r%d", contador_rotulo++);
    return rotulo;
}

// Função para gerar nomes de temporários únicos
char *gera_temporario()
{
    static int contador_temporario = 0;
    static char temporario[20];
    sprintf(temporario, "r%d", contador_temporario++);
    return temporario;
}

void gera_codigo_iloc_op_binario(char op, ast *left, ast *right, ILOCOperationList **iloc_list)
{
    ILOCArg *temp1 = create_arg(TEMPORARY, -1, gera_temporario());
    ILOCArg *temp2 = create_arg(TEMPORARY, -1, gera_temporario());
    ILOCArg *temp3 = create_arg(TEMPORARY, -1, gera_temporario());

    adiciona_operacao(iloc_list, LOAD, left->result, NULL, temp1);
    adiciona_operacao(iloc_list, LOAD, right->result, NULL, temp2);

    int op_type;
    switch (op)
    {
    case '+':
        op_type = ADD;
        break;
    case '-':
        op_type = SUB;
        break;
    default:
        fprintf(stderr, "Operador nao identificado: %c\n", op);
    }

    adiciona_operacao(iloc_list, op_type, temp1, temp2, temp3);
    left->result = temp3;
}

// void gera_codigo_iloc_decl_var(ast *node, ILOCOperationList **iloc_list, int frame_pointer_offset)
// {
//     // Cria um novo argumento para a variável
//     printf("Tste");
//     //ILOCArg *new_var = create_arg(VARIABLE, frame_pointer_offset + 4, NULL);
//     printf("Passou\n");
//     // Adiciona a operação storeAI para armazenar a variável no endereço correspondente na memória
//     //adiciona_operacao(iloc_list, STOREAI, create_arg(CONSTANT, 0, NULL), NULL, new_var);
//     // printf("Passou 2\n");
//     // // Define o resultado da árvore AST para ser o argumento da variável
//     // node->result = new_var;
// }

// void gera_codigo_iloc_decl_var(char *nome_var, ILOCOperationList **iloc_list, int rfp, int rbss)
// {
//     // Calcula o offset da variável em relação à rfp
//     int offset = rfp - 4;

//     // Cria um argumento com o tipo REGISTER_OFFSET e um offset negativo em relação à rfp
//     ILOCArg *arg = create_arg(REGISTER_OFFSET, rfp, -offset, nome_var);
//     // Adiciona uma operação loadI com o valor 0 e o argumento criado como output
//     adiciona_operacao(iloc_list, LOADAI, create_arg(CONSTANT, 0, 0, NULL), NULL, arg);
// }

// void gera_codigo_iloc_op_binario(char op, ast *left, ast *right, ILOCOperationList **iloc_list)
// {
//     ILOCArg *temp1 = create_arg(TEMPORARY, -1, gera_temporario());
//     ILOCArg *temp2 = create_arg(TEMPORARY, -1, gera_temporario());
//     ILOCArg *temp3 = create_arg(TEMPORARY, -1, gera_temporario());

//     // Carrega o valor da variável local ou global para o temporário correspondente
//     if (left->is_local_var)
//     {
//         adiciona_operacao(iloc_list, LOADAI, create_arg(FRAME_POINTER, left->offset, NULL), NULL, temp1);
//     }
//     else
//     {
//         adiciona_operacao(iloc_list, LOAD, left->result, NULL, temp1);
//     }

//     if (right->is_local_var)
//     {
//         adiciona_operacao(iloc_list, LOADAI, create_arg(FRAME_POINTER, right->offset, NULL), NULL, temp2);
//     }
//     else
//     {
//         adiciona_operacao(iloc_list, LOAD, right->result, NULL, temp2);
//     }

//     // Define o tipo da operação binária
//     int op_type;
//     switch (op)
//     {
//     case '+':
//         op_type = ADD;
//         break;
//     case '-':
//         op_type = SUB;
//         break;
//     default:
//         fprintf(stderr, "Operador nao identificado: %c\n", op);
//     }

//     // Executa a operação binária e armazena o resultado no temporário correspondente
//     adiciona_operacao(iloc_list, op_type, temp1, temp2, temp3);

//     // Armazena o valor do temporário correspondente na variável local ou global correspondente
//     if (left->is_local_var)
//     {
//         adiciona_operacao(iloc_list, STOREAI, temp3, create_arg(FRAME_POINTER, left->offset, NULL), NULL);
//     }
//     else
//     {
//         adiciona_operacao(iloc_list, STORE, temp3, NULL, left->result);
//     }
// }