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
void *iloc_list = NULL;
void print_operation_list(void *iloc_list);

int main (int argc, char **argv)
{
  int ret = yyparse(); 
  exporta (arvore);
  libera(arvore);
  print_operation_list(iloc_list);
  arvore = NULL;
  yylex_destroy();
  return ret;
}
