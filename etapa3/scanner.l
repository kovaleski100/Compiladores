/********************************************************************** 
 * INF01147 - Compiladores - Turma B (2022/2)                         *
 *                                                                    *
 * Felipe Bastos                                                      *
 * Matheus F Kovaleski                                                *
 *                                                                    *
 *                                                                    *
 **********************************************************************/
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
"if"			  return TK_PR_IF;
"then"			return TK_PR_THEN;
"else"			return TK_PR_ELSE;
"while"			return TK_PR_WHILE;
"input"			return TK_PR_INPUT;
"output"		return TK_PR_OUTPUT;
"return"		return TK_PR_RETURN;
"for"			  return TK_PR_FOR;

  /* (5) -> Literais true e false
  **     Tive que colocar essas declarações aqui em cima pois se ficasse na categoria 5
  **     acabava sendo entendido como um identificador em vez de um literal. */

"true"			return TK_LIT_TRUE;
"false"			return TK_LIT_FALSE;

  /* (4) -> Identificadores */

[A-Za-z][A-Za-z]* {yylval.valor_lexico = cria_valor(TK_IDENTIFICADOR); return TK_IDENTIFICADOR;} // dentro dessa func vai ter um malloc 2.1

  /* (3) -> Operadores compostos */

"<="			return TK_OC_LE;
">="			return TK_OC_GE;
"=="			return TK_OC_EQ;
"!="			return TK_OC_NE;
"&&"			return TK_OC_AND;
"||"			return TK_OC_OR;

  /* (5) -> Literais */

[-+]?[0-9]+ 				{yyval.valor_lexico = cria_valor(TK_LIT_INT); return TK_LIT_INT;}
[-+]?[0-9]+\.[0-9]+([Ee][-+]?[0-9]+)? 	{yyval.valor_lexico = cria_valor(TK_LIT_FLOAT); return TK_LIT_FLOAT;}
\'.\'					{yyval.valor_lexico = cria_valor(TK_LIT_CHAR); return TK_LIT_CHAR;}

  /* (2) -> Caracteres especiais */

{ESPECIAL}              return yytext[0];

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
