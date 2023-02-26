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
  char* nome;
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

TabelaSimbolos* cria_tabela_vazia();
CONTEUDO *cria_conteudo(valor_lexico* vl);
int getTabelaSimbolosSize(TabelaSimbolos **tabela_de_simbolos);
