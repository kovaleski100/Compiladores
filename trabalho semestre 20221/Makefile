#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# *                                                                    *
# * Felipe Bastos                                                     *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

# build: clean scanner.l main.c
# 	flex scanner.l
# 	gcc -o etapa1 lex.yy.c main.c -I.

clean:
	rm -f etapa1
	rm -f etapa2
	rm -f etapa3
	rm -f etapa4
	rm -f etapa5
	rm -f etapa6
	rm -f etapa7
	rm -f lex.yy.c
	rm -f parser.tab.h
	rm -f parser.tab.c
	rm -f parser.output
	rm -f test.c
	rm -f a.out

main: main.clean
			gcc main.c -c

scanner: scanner -l
				flex scanner.l
				gcc lex.yy.c -c

all: main scanner
		 gcc.lex.yy.o main.o -o etapa1