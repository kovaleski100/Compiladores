#include "ast.h"

ast* create_node(int tipo, valor_lexico valor)
{
    ast *node = (ast*)malloc(sizeof(ast));

    node->filho = NULL;
    node->tipo_token = tipo;
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

print_arvore(ast *arvore)
{
    for(int i=0; i< arvore->num_filhos; i++)
    {
        print_dados(&arvore->valor_lexico)
    }
    for(int i = 0; i< arvore->num_filhos; i++)
    {
        print_arvore(&arvore->filho[i]);
    }
}


//acho que essa função tem que ser implementada conforme for ocorrendo os testes
print_dados(ast *arvore)
{

}