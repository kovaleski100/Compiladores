#include "stack.h"

void push(PILHA **pilha, TabelaSimbolos *tabela)
{
    PILHA *aux = (PILHA*)malloc(sizeof(PILHA));
    aux->tabela_de_simbolos = tabela;
    if(*pilha != NULL)
    {
        aux->proxima_tabela = *pilha;
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
    TabelaSimbolos *tabela = busca_escopo_local(pilha);
    printf("Procura_simbolo\n");
    char* nome_var = vl->valorToken;
    printf("Tabela procura_simbolo\n");
    if(pilha->tabela_de_simbolos == NULL){
        return NULL;
    }
    //tabela = &pilha->tabela_de_simbolos;
    // int tam = getTabelaSimbolosSize(tabela);
    // printf("Tamanho Tabela procura_simbolo %d\n", tam);
    for(int i = 0; i<100; i++)
    {
        printf("Compare valor I: %d tem_simbolo: %d\n", i, tabela[i].tem_simbolo);
        if(tabela[i].tem_simbolo == 0){
            printf("É NULL \n");
            return NULL;
        }
        printf("Não é null \n");
        // printf("Conteudo->nome %s \n", (*tabela)[i].conteudo->nome);
        printf("Conteudo->nome %s \n", nome_var);
        if(strcmp(tabela[i].conteudo->nome, nome_var) == 0)
        {
            printf("Encontrou simbolo \n");
            return tabela[i].conteudo;
        }
    }


    // Percorre a pilha até chegar à última tabela
    PILHA* ultima_tabela = pilha;
    while (ultima_tabela->proxima_tabela != NULL) {
    ultima_tabela = ultima_tabela->proxima_tabela;
    }

    // Acessa a última tabela
    TabelaSimbolos* tabela_global = ultima_tabela->tabela_de_simbolos;
    for(int i = 0; i<100; i++)
    {
        printf("Compare valor I: %d tem_simbolo: %d\n", i, tabela_global[i].tem_simbolo);
        if(tabela_global[i].tem_simbolo == 0){
            printf("É NULL \n");
            return NULL;
        }
        printf("Não é null \n");
        // printf("Conteudo->nome %s \n", (*tabela)[i].conteudo->nome);
        printf("Conteudo->nome %s \n", nome_var);
        if(strcmp(tabela_global[i].conteudo->nome, nome_var) == 0)
        {
            printf("Encontrou simbolo \n");
            return tabela_global[i].conteudo;
        }
    }
    //printf("Conteudo da tabela de simbolos na adiciona_simbolo %s\n", (*tabela)[tam].conteudo->nome);
    printf("Proxima tabela procura_simbolo \n");
    return NULL;
    // if(escopolocal == false && pilha->proxima_tabela != NULL)
    // {
    //     printf("Busca escopo global \n");
    //     return procura_simbolo(pilha->proxima_tabela, vl, escopolocal);
    // } // ISSO TA ERRADO, na pilha vai ter o topo da pilha, a ultima da stack que é a variavel global
    // else{
    //     return NULL;
    // }
}

// void declaracao_var(PILHA *escopo, CONTEUDO * conteudo,int chave)
// {
//     if(!procura_simbolo(escopo, chave, true))
//     {
        
//         adiciona_simbolo(&escopo->tabela_de_simbolos, conteudo, chave);
//         return;
//     }
//     else{
//         exit(ERR_DECLARED);
//     }
// }

// void atribuiVariavel(PILHA *escopo,int chave )
// {
//     if(!procura_simbolo(escopo, chave, false))
//     {
//         exit(ERR_UNDECLARED);
//     }
// }

void print_pilha(PILHA* pilha){
    if(pilha == NULL){
        printf("Pilha vazia\n");
        return;
    }
    if(pilha->tabela_de_simbolos == NULL){
        printf("Tabela nula \n");
        return;
    }
    TabelaSimbolos **tabela = NULL;
    tabela = &pilha->tabela_de_simbolos;
    if(tabela == NULL){
        printf("Tabela nula \n");
        return;
    }
    printf("Pilha %d\n", tabela[0]->conteudo->linha);
}

TabelaSimbolos* devolve_primeira_tabela(PILHA *pilha){
        return pilha->tabela_de_simbolos;
}

void adiciona_simbolo(CONTEUDO *conteudo, int chave, PILHA *pilha)
{
    // int tam = getTabelaSimbolosSize(tabela_de_simbolos);
    // printf("Tamanho da tabela na adiciona_simbolo %d \n", tam);

    TabelaSimbolos *tabela = pilha->tabela_de_simbolos;
    //TabelaSimbolos **tabela = NULL;
    int tam = 0;
    for(int i = 0; i<100; i++)
    {
        printf("Compare valor adiciona_Simbolo I: %d\n", i);
        if(tabela[i].tem_simbolo == 0){
            printf("É NULL \n");
            break;
        }
        tam++;
    }
    //*tabela_de_simbolos = realloc(*tabela_de_simbolos, (tam + 1) * sizeof(TabelaSimbolos));
    // TabelaSimbolos* nova_tabela = realloc(*tabela_de_simbolos, (100) * sizeof(TabelaSimbolos));
    // if (nova_tabela == NULL) {
    //     printf("Erro ao realocar memória na função adiciona_simbolo\n");
    //     return;
    // }
    // *tabela_de_simbolos = nova_tabela;
    // if (*tabela_de_simbolos == NULL) {
    //     return;
    // }
    printf("Tamanho %d \n", tam);
    tabela[tam].conteudo = conteudo;
    tabela[tam].chave = tam;
    tabela[tam].tem_simbolo = 1;
    printf("Conteudo adicionado na tabela\n");
    printf("Conteudo da tabela de simbolos na adiciona_simbolo %s\n", tabela[tam].conteudo->nome);
    printf("Chave da tabela de simbolos na adiciona_simbolo %d\n", tabela[tam].chave);
}


TabelaSimbolos *busca_escopo_local(PILHA *root)
{
    return root->tabela_de_simbolos;
}
