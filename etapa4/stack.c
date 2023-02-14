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