#include "symbolTable.h"

void adiciona_simbolo(TabelaSimbolos **tabela_de_simbolos, CONTEUDO *conteudo, int valor_lexico)
{
    
    int tam = strlen(tabela_de_simbolos);
    tabela_de_simbolos = realloc(tabela_de_simbolos,sizeof(tabela_de_simbolos)*(tam+1));
    tabela_de_simbolos[tam]->conteudo = conteudo;
    tabela_de_simbolos[tam]->chave = valor_lexico;
}