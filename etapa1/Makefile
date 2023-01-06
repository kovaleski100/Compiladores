#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/

clean:
	rm -f etapa1
	rm -f lex.yy.c
	rm -f lex.yy.o
	rm -f main.o

main: main.c
			gcc main.c -c

scanner: scanner.l
				flex scanner.l
				gcc lex.yy.c -c

all: main scanner
		 gcc lex.yy.o main.o -o etapa1