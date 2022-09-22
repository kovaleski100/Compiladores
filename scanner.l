/********************************************************************** 
 * INF01147 - Compiladores - Turma B (2022/1)                         *
 *                                                                    *
 *                                                                    *
 * André Carini                                                       *
 * Matheus Kovaleski                                                  *
 **********************************************************************/

%top{
#include "tree.h"
#include "hash.h"
#include "parser.tab.h"

void process_multiline_comments();
int get_line_number(void);
int current_line_number = 1;
}

%option noyywrap

ESPECIAL [,;:()\[\]\{\}+-|*/<>=!&%#ˆ.$]

%%
  /*
  ** Definição dos tokens a serem reconhecidos.
  ** 
  ** Existem  tokens  que  correspondem  a  caracteres  particulares, como vírgula,
  ** ponto-e-vírgula, parênteses, para os quais é mais conveniente usar seu próprio
  ** código ASCII (convertido  para  inteiro)  como  valor  de  retorno  que  os 
  ** identifica.  
  **
  ** Para os tokens compostos, como palavras reservadas e identificadores, utiliza-se
  ** uma constante, conforme o arquivo tokens.h fornecido, com  um  código  maior  do
  ** que 255 para representá-los.
  **
  ** Os tokens se enquadram em diferentes categorias: 
  **   (1) palavras reservadas da linguagem;
  **   (2) caracteres especiais;
  **   (3) operadores compostos; 
  **   (4) identificadores;
  **   (5) literais;
  **   (6) outros (espaços, tabs, newlines, comentários e tokens inválidos).
  */

  /* (1) -> Palavras reservadas da linguagem */

"int"			  return TK_PR_INT;
"float"			return TK_PR_FLOAT;
"bool"			return TK_PR_BOOL;
"char"			return TK_PR_CHAR;
"string"		return TK_PR_STRING;

"if"			  {yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_IF;}

"then"			return TK_PR_THEN;
"else"			return TK_PR_ELSE;

"while"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_WHILE;}

"do"			  return TK_PR_DO;

"input"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_INPUT;}
"output"		{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_OUTPUT;}
"return"		{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_RETURN;}

"const"			return TK_PR_CONST;
"static"		return TK_PR_STATIC;
"foreach"		return TK_PR_FOREACH;

"for"			  {yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_FOR;}

"switch"		return TK_PR_SWITCH;
"case"			return TK_PR_CASE;

"break"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_BREAK;}
"continue"	{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_PR_CONTINUE;}

"class"			return TK_PR_CLASS;
"private"		return TK_PR_PRIVATE;
"public"		return TK_PR_PUBLIC;
"protected"	return TK_PR_PROTECTED;
"end"			  return TK_PR_END;
"default"		return TK_PR_DEFAULT;

  /* (5) -> Literais true e false
  **     Tive que colocar essas declarações aqui em cima pois se ficasse na categoria 5
  **     acabava sendo entendido como um identificador em vez de um literal. */

"true"			{yylval.valor_lexico = create_symbol_value_bool(get_line_number(), LITERAL, TYPE_BOOL, strdup(yytext)); return TK_LIT_TRUE;}
"false"			{yylval.valor_lexico = create_symbol_value_bool(get_line_number(), LITERAL, TYPE_BOOL, strdup(yytext)); return TK_LIT_FALSE;}

  /* (4) -> Identificadores */

[A-Za-z_][A-Za-z0-9_]* {yylval.valor_lexico = create_symbol_value_string(get_line_number(), ID, TYPE_STRING, strdup(yytext)); return TK_IDENTIFICADOR;}

  /* (3) -> Operadores compostos */

"<="      {yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_LE;}
">="			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_GE;}
"=="			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_EQ;}
"!="			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_NE;}
"&&"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_AND;}
"||"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_OR;}
">>"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_SL;}
"<<"			{yylval.valor_lexico = create_symbol_value_string(get_line_number(), COMPOSE_OP, TYPE_STRING, strdup(yytext)); return TK_OC_SR;}

  /* (5) -> Literais */

[-+]?[0-9]+ 				                    {yylval.valor_lexico = create_symbol_value_int(get_line_number(), LITERAL, TYPE_INT, atoi(yytext)); return TK_LIT_INT;}
[-+]?[0-9]+\.[0-9]+([Ee][-+]?[0-9]+)? 	{yylval.valor_lexico = create_symbol_value_int(get_line_number(), LITERAL, TYPE_FLOAT, atof(yytext)); return TK_LIT_FLOAT;}
\'.\'					                          {yylval.valor_lexico = create_symbol_value_char(get_line_number(), LITERAL, TYPE_CHAR, yytext[1]); return TK_LIT_CHAR;}
\"[^"]*\"				                        {yylval.valor_lexico = create_symbol_value_string(get_line_number(), LITERAL, TYPE_STRING, strdup(yytext)); return TK_LIT_STRING;}

  /* (2) -> Caracteres especiais */

{ESPECIAL}              {yylval.valor_lexico = create_symbol_value_char(get_line_number(), SPECIAL_CHAR, TYPE_CHAR, yytext[0]); return yytext[0];}

  /* (6) -> Outros */

  /* Ignorar espaços e tabs */
[ \t]

  /* Contar newlines (LF, opcionalmente precedido por CR) */
\r?\n			current_line_number++;

  /* Ignorar comentários single-line. Note que o forward slash está escapado. */
\/\/.*

  /* Ignorar comentários multi-line, mas contabilizar o número de newlines */
"/*"			process_multiline_comments();

  /* Qualquer outra coisa: lançar erro */
.			return TOKEN_ERRO;

%%

int get_line_number(void) {
  return current_line_number;
}

/********************************************************************** 
 * Processa comentários multiline C, descartando o texto              *
 * e contabilizando corretamente a quantidade de newlines.            *
 *                                                                    *
 * Inspirado em http://www.lysator.liu.se/c/ANSI-C-grammar-l.html     *
 * e https://stackoverflow.com/a/15926440                             *
 **********************************************************************/
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
