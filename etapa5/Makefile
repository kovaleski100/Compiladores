#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/

main: main.c
			bison -d parser.y
			flex scanner.l
			gcc -Wall -Wextra ast.c symbolTable.c stack.c erro.c ILOC.c parser.tab.c lex.yy.c main.c -o etapa4

debug: 
		bison -d parser.y
			flex scanner.l
			gcc -g ast.c stack.c symbolTable.c parser.tab.c lex.yy.c main.c

scanner: scanner.l
			flex scanner.l
			gcc lex.yy.c -c

bison: parser.y			
			bison -d -v parser.y

zip:
	tar cvzf etapa4.tgz Makefile main.c parser.y scanner.l erro.c erro.h ast.h ast.c stack.c stack.h symbolTable.c symbolTable.h

val:
	valgrind --leak-check=full --show-leak-kinds=all -s ./etapa4 < teste > saida

test:
	./etapa4 < teste

clean:
	rm -f a.out
	rm -f etapa4
	rm -f parser.tab.c
	rm -f parser.tab.o
	rm -f parser.tab.h
	rm -f parser.output
	rm -f lex.yy.c
	rm -f lex.yy.o
	rm -f main.o
	rm -f ast.o
	rm -f erro.o
	rm -f stack.o
	rm -f symbolTable.o