%top{
  #include "parser.tab.h"
  #include "ast.h"

  void process_multiline_comments();
  int current_line_number = 1;
}

%option noyywrap
extra int yylineo

ESPECIAL [,;:()\{\}\[\]+/%^<>=!*-]
%x COMENTARIO


%%
"int"			return TK_PR_INT;
"float"			return TK_PR_FLOAT;
"bool"			return TK_PR_BOOL;
"char"			return TK_PR_CHAR;
"if"			  {yylval.valor_lexico = cria_valor(palavra_reservada, current_line_number, yytext, nulo); return TK_PR_IF;}
"then"			return TK_PR_THEN;
"else"			return TK_PR_ELSE;
"while"			{yylval.valor_lexico = cria_valor(palavra_reservada, current_line_number, yytext, nulo); return TK_PR_WHILE;}
"input"			{yylval.valor_lexico = cria_valor(palavra_reservada, current_line_number, yytext, nulo); return TK_PR_INPUT;}
"output"		{yylval.valor_lexico = cria_valor(palavra_reservada, current_line_number, yytext, nulo); return TK_PR_OUTPUT;}
"return"		{yylval.valor_lexico = cria_valor(palavra_reservada, current_line_number, yytext, nulo); return TK_PR_RETURN;}
"for"			  {yylval.valor_lexico = cria_valor(palavra_reservada, current_line_number, yytext, nulo); return TK_PR_FOR;}

  /* (5) -> Literais true e false
  **     Tive que colocar essas declarações aqui em cima pois se ficasse na categoria 5
  **     acabava sendo entendido como um identificador em vez de um literal. */

"true"			{yylval.valor_lexico = cria_valor(literal_bool, current_line_number, yytext, verdadeiro); return TK_LIT_TRUE;}
"false"			{yylval.valor_lexico = cria_valor(literal_bool, current_line_number, yytext, falso); return TK_LIT_FALSE;}

  /* (4) -> Identificadores */

[A-Za-z][A-Za-z]* {yylval.valor_lexico = cria_valor(identificador, current_line_number, yytext, nulo); return TK_IDENTIFICADOR;} // dentro dessa func vai ter um malloc 2.1

  /* (3) -> Operadores compostos */

"<="		{yylval.valor_lexico = cria_valor(operador_composto, current_line_number, yytext, nulo); return TK_OC_LE;}
">="		{yylval.valor_lexico = cria_valor(operador_composto, current_line_number, yytext, nulo); return TK_OC_GE;}
"=="		{yylval.valor_lexico = cria_valor(operador_composto, current_line_number, yytext, nulo); return TK_OC_EQ;}
"!="		{yylval.valor_lexico = cria_valor(operador_composto, current_line_number, yytext, nulo); return TK_OC_NE;}
"&&"		{yylval.valor_lexico = cria_valor(operador_composto, current_line_number, yytext, nulo); return TK_OC_AND;}
"||"		{yylval.valor_lexico = cria_valor(operador_composto, current_line_number, yytext, nulo); return TK_OC_OR;}

  /* (5) -> Literais */

<<<<<<< HEAD
\s*[-+]?[0-9]+\s*				{yylval.valor_lexico = cria_valor(literal_inteiro, current_line_number, yytext, inteiro); printf("%s\n", yytext);return TK_LIT_INT;}
=======
[-+]?[0-9]+\s*				{yylval.valor_lexico = cria_valor(literal_inteiro, current_line_number, yytext, inteiro);return TK_LIT_INT;}
>>>>>>> 8b13f6c6fe1e8339d8103c4bff54df7a44125803
\s*[-+]?[0-9]+\.[0-9]+([Ee][-+]?[0-9]+)?\s* 	{yylval.valor_lexico = cria_valor(literal_float, current_line_number, yytext, flutuante); return TK_LIT_FLOAT;}
\'.\'					{yylval.valor_lexico = cria_valor(literal_char, current_line_number, yytext, caracter); return TK_LIT_CHAR;}

  /* (2) -> Caracteres especiais */
<<<<<<< HEAD
\s*?({ESPECIAL}\s*?)?              {yylval.valor_lexico = cria_valor(caracter_especial, current_line_number, yytext, nulo); printf("%s\n", yytext) ;return yytext[0];};
=======
\s*({ESPECIAL}\s*)?              {yylval.valor_lexico = cria_valor(caracter_especial, current_line_number, yytext, nulo) ;return yytext[0];};
>>>>>>> 8b13f6c6fe1e8339d8103c4bff54df7a44125803

  /* (6) -> Outros */

  /* Ignorar espaços e tabs */
[ \t]

  /* Contar newlines (LF, opcionalmente precedido por CR) */
\r?\n			current_line_number++;

  /* Ignorar comentários single-line. Note que o forward slash está escapado. */
\/\/.*

  /* Ignorar comentários multi-line, mas contabilizar o número de newlines */
"/*"			{BEGIN(COMENTARIO);}
          <COMENTARIO>"*/" {BEGIN(INITIAL);}
          <COMENTARIO>"\n" current_line_number++;
          <COMENTARIO>.

  /* Qualquer outra coisa: lançar erro */
.			return TK_ERRO;

%%

int get_line_number(void) {
  return current_line_number;
  //print("%d\n", yylineno)
  //return yylineno;
}

void process_multiline_comments() {
  char c, c1;

  while(1){
    while ((c = input()) != '*' && c != 0) {
      if (c == '\n') {
        current_line_number++;
      }
    }

    if ((c1 = input()) != '/' && c != 0) {
      unput(c1);
    } else {
      break;
    }
  }
}
