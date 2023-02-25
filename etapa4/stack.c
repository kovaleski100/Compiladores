#include "stack.h"

void push(PILHA **pilha, TabelaSimbolos *tabela)
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
    *pilha = aux;
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


CONTEUDO* procura_simbolo(PILHA *pilha, valor_lexico *vl, bool escopolocal)
{
    if(pilha == NULL)
    {
        printf("Não encontrou simbolo \n");
        return NULL;
    }
    TabelaSimbolos **tabela = NULL;

    char* nome_var = vl->valorToken;
    printf("Tabela\n");
    tabela = &pilha->tabela_de_simbolos;
    int tam = getTabelaSimbolosSize(tabela);
    for(int i =0; i<tam; i++)
    {
        printf("Compare valor I: %d\n", i);
        printf("Conteudo->nome %s \n", tabela[i]->conteudo->nome);
        printf("Conteudo->nome %s \n", nome_var);
        if(strcmp(tabela[i]->conteudo->nome, nome_var) == 0)
        {
            printf("Encontrou simbolo \n");
            return tabela[i]->conteudo;
        }
    }
    if(escopolocal == false && pilha->proxima_tabela != NULL)
    {
        return procura_simbolo(pilha->proxima_tabela, vl, escopolocal);
    } // ISSO TA ERRADO, na pilha vai ter o topo da pilha, a ultima da stack que é a variavel global
    else{
        return NULL;
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
    TabelaSimbolos **tabela = NULL;
    tabela = &pilha->tabela_de_simbolos;
    printf("Pilha %d\n", tabela[0]->conteudo->linha);
}

TabelaSimbolos* devolve_primeira_tabela(PILHA *pilha){
        return pilha->tabela_de_simbolos;
}