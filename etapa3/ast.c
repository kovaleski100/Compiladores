#include "ast.h"

ast* create_node(int tipo, valor_lexico *valor)
{
    if(valor == NULL){
        return; 
    }
    ast *node = (ast*)malloc(sizeof(ast));

    node->filho = NULL;
    // node->tipo_token = tipo;
    node->valor_lexico = valor;

    return node;

}

// ast* create_leaf(int tipo, valor_lexico valor); precisa?
ast* add_child(ast *arvore, ast nodo)
{
    realloc(arvore->filho, sizeof(arvore->filho)*(arvore->num_filhos+1));
    arvore->filho[arvore->num_filhos] = nodo;
    arvore->num_filhos += 1;
    return arvore;
}

void exporta(ast *arvore)
{
    for(int i=0; i< arvore->num_filhos; i++)
    {
        print_nodo(&arvore);
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
        printf("%p, %p", arvore, arvore->filho[i]);
        print_nodo(&arvore->filho[i]);
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
    // SALVA CARACTERISTICAS DO VALOR LEXICO
    vl->tipo_token = tipo_token;
    vl->numero_linha = current_line_number;

    if(tipo_token == literal && tipo_literal == inteiro){
        vl->literal.inteiro = atoi(texto);
    }
    else if(tipo_token == literal && tipo_literal == flutuante){
        vl->tipo_literal = tipo_literal;
    }
    else if(tipo_token == literal && tipo_literal == falso){
        vl->tipo_literal = false;
    } 
    else if(tipo_token == literal && tipo_literal == verdadeiro){
            vl->tipo_literal = tipo_literal;= true;
    }
    else{
        vl->valor_token = strdup(texto);
    }
    return vl;
}