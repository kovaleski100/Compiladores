#include "ast.h"
#include "ILOC.h"

const char* get_op_name(ILOCOpType op) {
    switch (op) {
        case ADD:
            return "add";
        case SUB:
            return "sub";
        case MULT:
            return "mult";
        case LOAD:
            return "load";
        case STORE:
            return "store";
        // Adicione outros tipos de operações aqui
        default:
            return "unknown";
    }
}

void print_arg(ILOCArg* arg) {
    if (!arg) return;

    switch (arg->type) {
        case TEMPORARY:
            printf("%s", arg->data.name);
            break;
        case CONSTANT:
            printf("%d", arg->data.value);
            break;
        case LABEL:
            printf("%s", arg->data.name);
            break;
        default:
            break;
    }
}

void print_operation_list(ILOCOperationList* list) {
    printf("PRINTAAAAA");
    ILOCOperationList* current = list;
    while (current != NULL) {
        ILOCOperation* op = current->instrucao;
        if (op) {
            printf("%s ", get_op_name(op->opType));
            print_arg(op->input1);
            if (op->input2) {
                printf(", ");
                print_arg(op->input2);
            }
            if (op->output) {
                printf(" -> ");
                print_arg(op->output);
            }
            printf("\n");
        }
        current = current->next;
    }
}

ast* create_node(int tipo, valor_lexico *valor)
{
    //printf("Entrou create node \n");
    if(valor == NULL){
        return NULL;
    }
    ast *node = (ast*)malloc(sizeof(ast));
    if(node == NULL){
        return NULL;
    }
    node->filho = NULL;
    node->num_filhos = 0;
    node->valor_lexico = valor;
    node->valor_lexico->tipo_token = tipo;
    return node;

}

// ast* create_leaf(int tipo, valor_lexico valor); precisa?
ast* add_child(ast *arvore, ast *nodo)
{
    if(arvore == NULL){
        return nodo;
    }
    arvore->filho = (ast**)realloc(arvore->filho, sizeof(arvore->filho)*(arvore->num_filhos+1));
    if(arvore->filho == NULL){
        return NULL;
    }
    arvore->filho[arvore->num_filhos] = nodo;
    arvore->num_filhos += 1;
    return arvore;
}

void exporta(ast *arvore)
{
    print_nodo(arvore);
    print_dados(arvore);



    ILOCOperationList* iloc_list = NULL;
    generate_iloc_code(arvore, &iloc_list);
    // Imprima a lista de operações ILOC
    print_operation_list(iloc_list);

    //free_operation_list(&iloc_list);
}

void print_nodo(ast *arvore)
{
    if(arvore == NULL)
    {
        return;
    }
    
    for(int i=0; i < arvore->num_filhos; i++)
    {
        // ast *child = (ast*)malloc(sizeof(ast));
        // child = arvore->filho[i];
        print_nodo(arvore->filho[i]);
        if(arvore->filho[i] != NULL){
            printf("%p, %p\n", arvore, arvore->filho[i]);
        }
    }
}

//acho que essa função tem que ser implementada conforme for ocorrendo os testes
void print_dados(ast *arvore)
{
    if (arvore == NULL) return;
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
            printf("[label = \"%s\" ]", arvore->valor_lexico->literal.b == true?"TRUE":"FALSE");
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
        for(int i = 0; i < arvore->num_filhos; i++)
        {
            {
                print_dados(arvore->filho[i]);
            }
        }
}

void destroiNodo(ast* arvore){
    if(arvore == NULL){
        return;
    }
    for (int i = 0; i < arvore->num_filhos; i++){
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
    destroiNodo((ast*)arvore);
}

void destroiVL(valor_lexico *vl){
    if(vl == NULL){
        return;
    }
    if(vl->tipo_token == literal_char){
        free(vl->literal.s);
    }
    free(vl->valorToken);
    free(vl);
}


valor_lexico* cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal)
{
    valor_lexico *vl = (valor_lexico*)malloc(sizeof(valor_lexico));
    if(vl == NULL){
        return NULL;
    }
    memset(vl,0,sizeof(valor_lexico));//memset para evitar condicional erro

    vl->tipo_token = tipo_token;
    vl->numero_linha = current_line_number;
    if(tipo_token == literal_inteiro){
        vl->literal.d = atoi(texto);
    }
    else if(tipo_token == literal_float){
        vl->literal.f = atof(texto);
    }
    else if(tipo_token == literal_bool){
        vl->literal.b = tipo_literal==falso ? false : true;
    }
    else if(tipo_token == literal_char){
        vl->literal.s= strdup(texto);
    }
    else{
        vl->valorToken = strdup(texto);
    }
    return vl;
}



////////////////////// ILOOOOOC //////////////////

void add_operation(ILOCOperationList* list, ILOCOpType opType, ILOCArg* input1, ILOCArg* input2, ILOCArg* output) {
    printf("ADD operation");
    ILOCOperation* new_operation = malloc(sizeof(ILOCOperation));
    new_operation->opType = opType;
    new_operation->input1 = input1;
    new_operation->input2 = input2;
    new_operation->output = output;

    ILOCOperationList* new_node = malloc(sizeof(ILOCOperationList));
    new_node->instrucao = new_operation;
    new_node->next = NULL;

    if (list == NULL) {
        list = new_node;
    } else {
        ILOCOperationList* current = list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

ILOCArg* create_arg(ArgType type, int value, char* name) {
    ILOCArg* arg = malloc(sizeof(ILOCArg));
    arg->type = type;
    if (type == CONSTANT) {
        arg->data.value = value;
    } else {
        arg->data.name = strdup(name);
    }
    return arg;
}

void free_arg(ILOCArg* arg) {
    if (arg->type != CONSTANT) {
        free(arg->data.name);
    }
    free(arg);
}

void free_operation_list(ILOCOperationList* list) {
    ILOCOperationList* current = list;
    while (current != NULL) {
        ILOCOperationList* next = current->next;
        free_arg(current->instrucao->input1);
        free_arg(current->instrucao->input2);
        free_arg(current->instrucao->output);
        free(current->instrucao);
        free(current);
        current = next;
    }
}


// Função para gerar nomes de rótulos únicos
char* generate_label() {
    static int label_count = 0;
    char label_name[32];

    snprintf(label_name, sizeof(label_name), "L%d", label_count);
    label_count++;

    return strdup(label_name);
}

// Função para gerar nomes de temporários únicos
char* generate_temp() {
    static int temp_count = 0;
    char temp_name[32];

    snprintf(temp_name, sizeof(temp_name), "t%d", temp_count);
    temp_count++;

    return strdup(temp_name);
}

void generate_iloc_code(ast* node, ILOCOperationList** iloc_list) {
    if (!node) {
        return;
    }
    printf("tipo nodo: %d\n\n\n" , node->tipo_nodo);
    switch (node->tipo_nodo) {
        case 0: {
            generate_iloc_code(node->filho[0], iloc_list);
            generate_iloc_code(node->filho[1], iloc_list);

            // Gere o código ILOC para a adição
            ILOCArg* temp1 = create_arg(TEMPORARY, 0, "temp1");
            ILOCArg* temp2 = create_arg(TEMPORARY, 0, "temp2");
            ILOCArg* result = create_arg(TEMPORARY, 0, "result");
            add_operation(iloc_list, ADD, temp1, temp2, result);
            break;
        }
        case SUBTRACTION: {
            generate_iloc_code(node->filho[0], iloc_list);
            generate_iloc_code(node->filho[1], iloc_list);

            // Gere o código ILOC para a subtração
            ILOCArg* temp1 = create_arg(TEMPORARY, 0, "temp1");
            ILOCArg* temp2 = create_arg(TEMPORARY, 0, "temp2");
            ILOCArg* result = create_arg(TEMPORARY, 0, "result");
            add_operation(iloc_list, SUB, temp1, temp2, result);
            break;
        }
        // // Adicione casos para outros tipos de nós aqui
        // ...
        default:
            break;
    }
}


void generate_iloc_code_for_binary_op(char op, ast *left, ast *right, ILOCOperationList *iloc_list) {
    printf("Generate");
    // Gere código ILOC para a subárvore à esquerda e à direita
    generate_iloc_code(left, iloc_list);
    generate_iloc_code(right, iloc_list);

    // Crie argumentos temporários
    ILOCArg *temp1 = create_arg(TEMPORARY, -1, generate_temp());
    ILOCArg *temp2 = create_arg(TEMPORARY, -1, generate_temp());
    ILOCArg *temp3 = create_arg(TEMPORARY, -1, generate_temp());

    // Carregue os valores das subárvores à esquerda e à direita nos temporários
    add_operation(iloc_list, LOAD, left->result, NULL, temp1);
    add_operation(iloc_list, LOAD, right->result, NULL, temp2);

    // Selecione o tipo de operação ILOC com base no operador
    ILOCOpType op_type;
    switch (op) {
        case '+':
            op_type = ADD;
            break;
        case '-':
            op_type = SUB;
            break;
        // Adicione outros operadores binários aqui
        default:
            fprintf(stderr, "Operador desconhecido: %c\n", op);
            exit(1);
    }

    // Adicione a operação ILOC para o operador
    add_operation(iloc_list, op_type, temp1, temp2, temp3);

    // Armazene o resultado da operação no nó da AST
    left->result = temp3;
}