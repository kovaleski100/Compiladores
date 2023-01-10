#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/


/*
Programa principal de impressão de tokens.
Este arquivo será posteriormente substituído.
*/
#include <stdio.h>
#include "parser.tab.h" //arquivo gerado com bison -d parser.y
extern int yylex_destroy(void);
int yyparse();

int main (int argc, char **argv)
{
  int ret = yyparse();
  yylex_destroy();
  return ret;
}
