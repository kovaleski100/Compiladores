#include "symbolTable.h"

int getTabelaSimbolosSize(TabelaSimbolos **tabela_de_simbolos)
{
  int tam = 0;
  if (*tabela_de_simbolos != NULL)
  {
      tam = sizeof(**tabela_de_simbolos) / sizeof(TabelaSimbolos);
  }
  return tam;
}

void adiciona_simbolo(TabelaSimbolos **tabela_de_simbolos, CONTEUDO *conteudo, int valor_lexico)
{
    int tam = getTabelaSimbolosSize(tabela_de_simbolos);
    *tabela_de_simbolos = realloc(*tabela_de_simbolos, (tam + 1) * sizeof(TabelaSimbolos));
    if (*tabela_de_simbolos == NULL) {
        return;
    }
    (*tabela_de_simbolos)[tam].conteudo = conteudo;
    (*tabela_de_simbolos)[tam].chave = valor_lexico;
}


CONTEUDO *cria_conteudo(valor_lexico* vl){
  CONTEUDO * conteudo = (CONTEUDO *)malloc(sizeof(CONTEUDO));
  conteudo->linha = vl->numero_linha;
  conteudo->tipo = vl->tipo_token;
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