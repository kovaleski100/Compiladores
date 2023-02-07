#include "ast.h"

ast* create_node(int tipo, valor_lexico *valor)
{
    //printf("Entrou create node \n");
    if(valor == NULL){
        return NULL;
    }
    ast *node = (ast*)malloc(sizeof(ast));
    node->filho = NULL;
    node->num_filhos = 0;
    // node->tipo_token = tipo;
    node->valor_lexico = valor;
    // printf("%s\n", node->valor_lexico->valorToken);
    // printf("Criou nodo\n");
    return node;

}

// ast* create_leaf(int tipo, valor_lexico valor); precisa?
ast* add_child(ast *arvore, ast *nodo)
{
    arvore->filho = (ast**)realloc(arvore->filho, sizeof(arvore->filho)*(arvore->num_filhos+1));
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
    printf("Printando nodo\n");
    for(int i=0; i < arvore->num_filhos; i++)
    {
        ast *child = (ast*)malloc(sizeof(ast));
        child = arvore->filho[i];
        printf("%p, %p\n", arvore, child);
        print_nodo(child);
    }
}

//acho que essa função tem que ser implementada conforme for ocorrendo os testes
void print_dados(ast *arvore)
{
    printf("Printando dados\n");
    printf("%d", arvore->num_filhos);
    printf("Printando dados2\n");
    for(int i = 0; i < arvore->num_filhos; i++)
    {
        printf("entrei");
        //printf("%p ", arvore->filho[i]);
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
        }
        print_dados(arvore->filho[i]);
    }
    printf("entrei");
}

void libera(ast *arvore)
{
    free(arvore);
}


valor_lexico* cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal)
{
    //printf("Cria Valor\n");
    valor_lexico *vl = (valor_lexico*)malloc(sizeof(valor_lexico));
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
    // printf("tipo: %d\n", vl->tipo_token);
    // printf("linha: %d\n", vl->numero_linha);
    // printf("literal: %d\n", vl->literal.d);
    return vl;
}