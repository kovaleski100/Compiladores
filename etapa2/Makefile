#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/

main: main.c
			bison -d -v parser.y
			flex scanner.l
			gcc parser.tab.c lex.yy.c -c
			gcc parser.tab.o lex.yy.o main.c -o etapa2

scanner: scanner.l
			flex scanner.l
			gcc lex.yy.c -c

bison: parser.y				
			bison -d -v parser.y

clean:
	rm -f etapa1
	rm -f lex.yy.c
	rm -f lex.yy.o
	rm -f main.o