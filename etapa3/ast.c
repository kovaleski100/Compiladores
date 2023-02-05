#include "ast.h"

ast* create_node(int tipo, valor_lexico *valor)
{
    if(valor == NULL){
        return NULL;
    }
    ast *node = (ast*)malloc(sizeof(ast));

    node->filho = NULL;
    // node->tipo_token = tipo;
    node->valor_lexico = valor;

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
    for(int i=0; i< arvore->num_filhos; i++)
    {
        print_nodo(arvore);
    }
    // for(int i = 0; i< arvore->num_filhos; i++)
    // {
    //     print_dados(&arvore->filho[i]);
    // }
}

void print_nodo(ast *arvore)
{
    for(int i=0; i < arvore->num_filhos; i++)
    {
        ast *child = (ast*)malloc(sizeof(ast));
        child = arvore->filho[i];
        printf("%p, %p", arvore, child);
        print_nodo(child);
    }
}

//acho que essa função tem que ser implementada conforme for ocorrendo os testes
// void print_dados(ast *arvore)
// {
    
// }

void libera(ast *arvore)
{
    free(arvore);
}


valor_lexico* cria_valor(int tipo_token, int current_line_number, char *texto, int tipo_literal)
{

    valor_lexico *vl = (valor_lexico*)malloc(sizeof(valor_lexico));
    vl->tipo_token = tipo_token;
    vl->numero_linha = current_line_number;

    if(tipo_token == literal && tipo_literal == inteiro){
        vl->valorToken->tl->d = atoi(texto);
    }
    else if(tipo_token == literal && tipo_literal == flutuante){
        vl->valorToken->tl->f = atof(texto);
    }
    else if(tipo_token == literal && tipo_literal == falso){
        vl->valorToken->tl->b = false;
    } 
    else if(tipo_token == literal && tipo_literal == verdadeiro){
        vl->valorToken->tl->b = true;
    }
    else if(tipo_token == literal && tipo_literal == caracter){
        vl->valorToken->tl->s = strdup(texto);
    }
    else{
        vl->valorToken->valor_token = strdup(texto);

    }
    return vl;
}