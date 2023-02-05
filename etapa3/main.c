#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/


/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
extern int yyparse(void);
extern int yylex_destroy(void);

void *arvore = NULL;
void exporta (void *arvore);
void libera (void *arvore);

int main (int argc, char **argv)
{
  //printf("Inicio");
  int ret = yyparse();
  printf("Antes do exporta\n"); 
  exporta (arvore);
  //printf("Depois do exporta");
  // libera(arvore);
  //printf("Depois do libera");
  // arvore = NULL;
  yylex_destroy();
  return ret;
}
