#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

build: clean scanner.l main.c parser.y
	flex scanner.l
	bison -d parser.y
	gcc -Wall -Wextra -o etapa3 symbol.c tree.c parser.tab.c lex.yy.c main.c -I.

clean:
	rm -f etapa2
	rm -f lex.yy.c
	rm -f parser.tab.h
	rm -f parser.tab.c
	rm -f parser.output
	rm -f test.c