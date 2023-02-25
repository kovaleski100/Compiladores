#include "symbolTable.h"


typedef struct Pilha{
  TabelaSimbolos *tabela_de_simbolos;
  struct Pilha* proxima_tabela;
} PILHA;



//Pilha *inicializa_pilha(TabelaSimbolos*);
void push(PILHA* pilha, TabelaSimbolos* escopo);
void pop(PILHA* pilha); // Devolve a pilha retirada
CONTEUDO* procura_simbolo(PILHA *pilha, int chave, bool escopolocal);
void destroi_pilha(PILHA pilha);
int check_declaracao(PILHA* escopo, int chave, bool escopolocal);
void print_pilha(PILHA* pilha);
TabelaSimbolos* devolve_primeira_tabela(PILHA *pilha);