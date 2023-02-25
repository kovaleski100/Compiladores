#include "stack.h"

void push(PILHA *pilha, TabelaSimbolos *tabela)
{
    PILHA *aux = (PILHA*)malloc(sizeof(PILHA));
    aux->tabela_de_simbolos = tabela;
    if(pilha != NULL)
    {
        aux->proxima_tabela = pilha;
    }
    else
    {
        aux->proxima_tabela = NULL;
    }

    //return aux;

}
void pop(PILHA **pilha)
{
    if (*pilha == NULL)
    {
        return;
    }
    else
    {
        PILHA *aux = *pilha;
        *pilha = (*pilha)->proxima_tabela;
        free(aux);
    }
}


CONTEUDO* procura_simbolo(PILHA *pilha, int chave, bool escopolocal)
{
    if(pilha == NULL)
    {
        return NULL;
    }
    TabelaSimbolos **tabela = NULL;

    tabela = &pilha->tabela_de_simbolos;
    int tam = getTabelaSimbolosSize(tabela);

    for(int i =0; i<tam; i++)
    {
        if(tabela[i]->chave == chave)
        {
            return tabela[i]->conteudo;
        }
    }
    if(escopolocal == false)
    {
        return procura_simbolo(pilha->proxima_tabela, chave, escopolocal);
    }
}

void declaracao_var(PILHA *escopo, CONTEUDO * conteudo,int chave)
{
    if(!procura_simbolo(escopo, chave, true))
    {
        
        adiciona_simbolo(&escopo->tabela_de_simbolos, conteudo, chave);
        return;
    }
    else{
        exit(ERR_DECLARED);
    }
}

void atribuiVariavel(PILHA *escopo,int chave )
{
    if(!procura_simbolo(escopo, chave, false))
    {
        exit(ERR_UNDECLARED);
    }
}

void print_pilha(PILHA* pilha){
    if(pilha == NULL){
        printf("Pilha vazia\n");
    }
    printf("Pilha %d\n", pilha->tabela_de_simbolos->conteudo->tipo);
}

TabelaSimbolos* devolve_primeira_tabela(PILHA *pilha){
        return pilha->tabela_de_simbolos;
}