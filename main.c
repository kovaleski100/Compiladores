#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/
#include <stdio.h>
#include "tree.h"
#include "parser.tab.h" //arquivo gerado com bison -d parser.y


extern int yyparse(void);
extern int yylex_destroy(void);
extern int yyerror(char const *s);

void *arvore = NULL;

int main (int argc, char **argv)
{
  int ret = yyparse();
  exporta(arvore);
  libera(arvore);
  arvore = NULL;
  yylex_destroy();
  return ret;
}