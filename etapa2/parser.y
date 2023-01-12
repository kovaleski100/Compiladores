%{

#include <stdio.h>
extern int current_line_number;
int yylex(void);
void yyerror (char const *s);
%}

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_FOR
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_IDENTIFICADOR
%token TK_ERRO

%start programa
%%

programa: lista_de_elementos | ;
lista_de_elementos: lista_de_elementos funcao;
lista_de_elementos: funcao;
lista_de_elementos:     declaracao |
                        lista_de_elementos declaracao;

declaracao: tipo lista_identificador;

lista_identificador:    TK_IDENTIFICADOR array ',' lista_identificador |
                        TK_IDENTIFICADOR array ';';

array:      '[' TK_LIT_INT ']'|
            '[' TK_LIT_INT '^' lista_de_literais_inteiros ']' | ;

lista_de_literais_inteiros :   TK_LIT_INT '^' lista_de_literais_inteiros | TK_LIT_INT;

funcao: cabecalho corpo;

corpo: bloco_de_comandos;

cabecalho:  tipo TK_IDENTIFICADOR '(' ')' |
            tipo TK_IDENTIFICADOR '(' lista_funcao ')';

lista_funcao:   parametro_funcao ',' lista_funcao |
                parametro_funcao;

            
parametro_funcao: tipo TK_IDENTIFICADOR;


bloco_de_comandos: '{' comandos '}' | '{' '}';

comandos: comandos_simples ';' comandos | comandos_simples ';';

comandos_simples:   tipo declaracao_variavel_local | 
                    atribuicao | 
                    retorno;


declaracao_variavel_local : TK_IDENTIFICADOR inicializacao_variavel_local ',' declaracao_variavel_local | 
                            TK_IDENTIFICADOR  ',' declaracao_variavel_local |      
                            TK_IDENTIFICADOR  inicializacao_variavel_local |
                            TK_IDENTIFICADOR ;

inicializacao_variavel_local: '<' '=' literais; 




atribuicao: TK_IDENTIFICADOR '=' expressao | TK_IDENTIFICADOR arranjo_multi '=' expressao

arranjo_multi:  '[' expressao ']' |
                '[' expressao  '^' lista_de_expressoes ']';

lista_de_expressoes: expressao '^' lista_de_expressoes | expressao;


retorno:  TK_PR_RETURN expressao;


expressao:  TK_IDENTIFICADOR |
            TK_IDENTIFICADOR '[' expressao ']' |
            TK_IDENTIFICADOR '[' expressao  '^' lista_de_expressoes ']' |
            literais |
            // chamada_funcao |
            unarios_prefixados expressao |
            expressao binarios expressao |
            expressao '<' expressao |
            expressao '>' expressao |
            expressao operadores_controles_de_fluxo expressao |
            '(' expressao ')'
            

unarios_prefixados: '-' | '!';

binarios:   '*' |
            '/' |
            '%' |
            '+' |
            '-' ;
//             operadores_compostos


// operadores_compostos:   '+' '+' |
//                         '-' '-' |
//                         '+' '=' |
//                         '-' '=' |
//                         '*' '=' |
//                         '/' '=' |
//                         '%' '='




tipo: TK_PR_FLOAT|
      TK_PR_INT  |
      TK_PR_CHAR |
      TK_PR_BOOL;

literais:   TK_LIT_FLOAT |
            TK_LIT_INT |
            TK_LIT_CHAR |
            TK_LIT_TRUE |
            TK_LIT_FALSE;

operadores_controles_de_fluxo:  TK_OC_LE |
                                TK_OC_GE  |
                                TK_OC_EQ |
                                TK_OC_NE |
                                TK_OC_AND |
                                TK_OC_OR |   
                                

      
%%
void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}