#include "symbolTable.h"


typedef struct Pilha{
  TabelaSimbolos *tabela_de_simbolos;
  struct Pilha* proxima_tabela;
} PILHA;



//Pilha *inicializa_pilha(TabelaSimbolos*);
void push(Pilha*, TabelaSimbolos*);
void pop(Pilha*); // Devolve a pilha retirada
CONTEUDO* procura_simbolo(PILHA *pilha, int chave);
void destroi_pilha(Pilha pilha);
int check_declaracao(PILHA* escopo, int chave, bool escopolocal);