#include "stack.h"

void push(Pilha *pilha, TabelaSimbolos *tabela)
{
    Pilha *aux = (Pilha*)malloc(sizeof(Pilha));
    aux->tabela_de_simbolos = tabela;
    if(pilha != NULL)
    {
        aux->proxima_tabela = pilha;
    }
    else
    {
        aux->proxima_tabela = NULL;
    }

    return aux;

}
void pop(Pilha *pilha)
{
    if(pilha == NULL)
    {
        return;
    }
    else
    {
        Pilha *aux = (Pilha*)malloc(sizeof(Pilha));
        aux = pilha->proxima_tabela;
        pilha->proxima_tabela = NULL;
        free(pilha);
        return aux;
    }
} // Devolve a pilha retirada

CONTEUDO* procura_simbolo(Pilha *pilha, int chave)
{
    if(pilha == NULL)
    {
        return NULL;
    }
    Pilha *aux = NULL;
    TabelaSimbolos *tabela = NULL;

    tabela = pilha->tabela_de_simbolos;
    int tam = strlen(tabela);

    for(int i =0; i<tam; i++)
    {
        if(tabela->chave == chave)
        {
            return tabela->conteudo;
        }
    }
    return procura_simbolo(pilha->proxima_tabela, chave);
}