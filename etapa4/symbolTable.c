#include "symbolTable.h"

int getTabelaSimbolosSize(TabelaSimbolos **tabela_de_simbolos)
{
  int tam = 0;
  if (*tabela_de_simbolos != NULL)
  {
      tam = sizeof(**tabela_de_simbolos) / sizeof(TabelaSimbolos);
  }
   printf("Tamanho tabela original %d \n", tam);
  return tam;
}

void adiciona_simbolo(TabelaSimbolos **tabela_de_simbolos, CONTEUDO *conteudo, int chave)
{
    int tam = getTabelaSimbolosSize(tabela_de_simbolos);
    printf("Tamanho da tabela na adiciona_simbolo %d \n", tam);
    *tabela_de_simbolos = realloc(*tabela_de_simbolos, (tam + 1) * sizeof(TabelaSimbolos));
    if (*tabela_de_simbolos == NULL) {
        return;
    }
    (*tabela_de_simbolos)[tam].conteudo = conteudo;
    (*tabela_de_simbolos)[tam].chave = tam;
    printf("Conteudo da tabela de simbolos na adiciona_simbolo %s\n", tabela_de_simbolos[0]->conteudo->nome);
}


CONTEUDO *cria_conteudo(valor_lexico* vl){

  CONTEUDO * conteudo = (CONTEUDO *)malloc(sizeof(CONTEUDO));
  conteudo->linha = vl->numero_linha;
  conteudo->tipo = vl->tipo_token;
  conteudo->nome = vl->valorToken;
  printf("Conteudo nome %s \n", conteudo->nome);
  return conteudo;
}

TabelaSimbolos* cria_tabela_vazia(){
    TabelaSimbolos * tabela = (TabelaSimbolos *)malloc(sizeof(TabelaSimbolos));
    if(tabela == NULL){
      return NULL;
    }
    else{
      return tabela;
    }
}