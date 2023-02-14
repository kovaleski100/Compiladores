#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/2)                         *
# *                                                                    *
# * Felipe Bastos                                                      *
# * Matheus Kovaleski                                      					 	 *
# **********************************************************************/

main: main.c
			bison -d parser.y
			flex scanner.l
			gcc -Wall -Wextra ast.c stack.c symbolTable.c parser.tab.c lex.yy.c main.c -o etapa3

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
	tar cvzf etapa3.tgz Makefile main.c parser.y scanner.l ast.h ast.c stack.c stack.h symbolTable.c symbolTable.h

val:
	valgrind --leak-check=full --show-leak-kinds=all -s ./etapa3 < teste > saida

test:
	./etapa3 < teste

clean:
	rm -f a.out
	rm -f etapa3
	rm -f parser.tab.c
	rm -f parser.tab.o
	rm -f parser.tab.h
	rm -f parser.output
	rm -f lex.yy.c
	rm -f lex.yy.o
	rm -f main.o
	rm -f ast.o