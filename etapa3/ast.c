#include "ast.h"


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
        printf("%p, %p\n", arvore, arvore->filho[i]);
        print_nodo(arvore->filho[i]);
    }
}

//acho que essa função tem que ser implementada conforme for ocorrendo os testes
void print_dados(ast *arvore)
{
    if (arvore == NULL) return;
    for(int i = 0; i < arvore->num_filhos; i++)
        {
            {
                print_dados(arvore->filho[i]);
            }
        }
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