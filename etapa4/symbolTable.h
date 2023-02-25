#include "ast.h"
#include "erro.h"

typedef struct arranjo{
  int *dim;
}ARR;

typedef struct argumentos
{
  char *argumeto;
}ARGS;


typedef union ArranjoOuVetor{
  ARGS arg;
  ARR arranjo;
}ARRANJOOUVETOR;


typedef struct CONTEUDO{
  int linha;
  int coluna;
  int natureza;
  int tipo;
  int tamanho;
  union tipo_literal valor_literal;
  union ArranjoOuVetor arrOuVet;
  // faltou o outros definido na 2.1
} CONTEUDO;


typedef struct TabelaSimbolos{
  int chave;
  CONTEUDO  *conteudo;
} TabelaSimbolos;

void adiciona_simbolo(TabelaSimbolos **tabela_de_simbolos, CONTEUDO *conteudo, int valor_lexico);
TabelaSimbolos* cria_tabela_vazia();
CONTEUDO *cria_conteudo(valor_lexico* vl);
