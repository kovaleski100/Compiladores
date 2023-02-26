#include "symbolTable.h"
#define TAMANHO_DA_TABELA 500

// int getTabelaSimbolosSize(TabelaSimbolos **tabela_de_simbolos)
// {
//   int tam = 0;
//   if (*tabela_de_simbolos != NULL)
//   {
//       tam = sizeof(tabela_de_simbolos) / sizeof(tabela_de_simbolos[0]);
//   }
//    //printf("Tamanho tabela original %d \n", tam);
//   return tam;
    
// }

// int getTabelaSimbolosSize(TabelaSimbolos** tabela_de_simbolos) {
//     int tamanho = 0;
//     for (int i = 0; i < TAMANHO_DA_TABELA; i++) {
//         if (tabela_de_simbolos[i] != NULL) {
//             tamanho++;
//         }
//     }
//     return tamanho;
// }


// void adiciona_simbolo(TabelaSimbolos **tabela_de_simbolos, CONTEUDO *conteudo, int chave) {
//     int tam = getTabelaSimbolosSize(tabela_de_simbolos);
//     printf("Tamanho da tabela na adiciona_simbolo %d \n", tam);
//     *tabela_de_simbolos = realloc(*tabela_de_simbolos, (tam + 1) * sizeof(TabelaSimbolos *));
//     if (*tabela_de_simbolos == NULL) {
//         return;
//     }
//     TabelaSimbolos *nova_entrada = malloc(sizeof(TabelaSimbolos));
//     if (nova_entrada == NULL) {
//         return;
//     }
//     nova_entrada->chave = chave;
//     nova_entrada->conteudo = conteudo;
//     (*tabela_de_simbolos)[tam] = *nova_entrada;
//     printf("Conteudo adicionado na tabela\n");
//     printf("Conteudo da tabela de simbolos na adiciona_simbolo %s\n", (*tabela_de_simbolos)[tam].conteudo->nome);
//     printf("Chave da tabela de simbolos na adiciona_simbolo %d\n", (*tabela_de_simbolos)[tam].chave);
// }


CONTEUDO *cria_conteudo(valor_lexico* vl, int natureza){

  CONTEUDO * conteudo = (CONTEUDO *)malloc(sizeof(CONTEUDO));
  conteudo->natureza = natureza;
  conteudo->linha = vl->numero_linha;
  conteudo->tipo = vl->tipo_token;
  conteudo->nome = vl->valorToken;
  printf("Conteudo nome %s \n", conteudo->nome);
  if(natureza == arranjoN)
  {

  }
  else if(natureza == funcao)
  {
    
  }
  return conteudo;
}

// TabelaSimbolos* cria_tabela_vazia(){
//     TabelaSimbolos * tabela = (TabelaSimbolos *)calloc(100, sizeof(TabelaSimbolos));
//     if(tabela == NULL){
//       return NULL;
//     }
//     else{
//       return tabela;
//     }
// }

TabelaSimbolos* cria_tabela_vazia(){
    TabelaSimbolos * tabela = (TabelaSimbolos *)calloc(100, sizeof(TabelaSimbolos));
    if(tabela == NULL){
      return NULL;
    }
    else{
      
       for(int i = 0; i<100; i++)
      {
          tabela[i].tem_simbolo = 0;
          // printf("Taela tem simbolo i: %d tem_simbolo: %d\n", i, tabela[i].tem_simbolo);
      }
      //printf("Tabela vazia criada \n");
      return tabela;
    }
}