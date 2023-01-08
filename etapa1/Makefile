#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/

main: main.c
			flex scanner.l
			gcc lex.yy.c -c
			gcc lex.yy.o main.c -o etapa1

scanner: scanner.l
				flex scanner.l
				gcc lex.yy.c -c

all: main scanner
		 gcc lex.yy.o main.o -o etapa1

clean:
	rm -f etapa1
	rm -f lex.yy.c
	rm -f lex.yy.o
	rm -f main.o