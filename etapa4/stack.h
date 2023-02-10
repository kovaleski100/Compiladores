#include "symbolTable.h"

typedef struct Pilha{
  TabelaSimbolos* tabela_de_simbolos;
  struct Pilha* proxima_tabela;
} Pilha;



Pilha *inicializa_pilha(TabelaSimbolos*);
void push(Pilha*, TabelaSimbolos*);
void pop(Pilha*); // Devolve a pilha retirada