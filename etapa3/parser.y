/********************************************************************** 
 * INF01147 - Compiladores - Turma B (2022/2)                         *
 *                                                                    *
 * Felipe Bastos                                                      *
 * Matheus F Kovaleski                                                *
 *                                                                    *
 *                                                                    *
 **********************************************************************/


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

lista_de_elementos:     declaracao |
                        lista_de_elementos declaracao |
                        lista_de_elementos funcao |
                        funcao;

declaracao: tipo lista_identificador;

lista_identificador:    TK_IDENTIFICADOR array ',' lista_identificador |
                        TK_IDENTIFICADOR array ';';

array:      '[' TK_LIT_INT ']'|
            '[' TK_LIT_INT '^' lista_de_literais_inteiros ']' | ;

lista_de_literais_inteiros :    TK_LIT_INT '^' lista_de_literais_inteiros |
                                TK_LIT_INT;

funcao: cabecalho corpo;

corpo: bloco_de_comandos;

cabecalho:  tipo TK_IDENTIFICADOR '(' ')' |
            tipo TK_IDENTIFICADOR '(' lista_funcao ')';

lista_funcao:   parametro_funcao ',' lista_funcao |
                parametro_funcao;

parametro_funcao: tipo TK_IDENTIFICADOR;

bloco_de_comandos: '{' comandos '}' | '{' '}';

comandos:   comandos_simples ';' comandos | 
            comandos_simples ';';

comandos_simples:   tipo declaracao_variavel_local | 
                    atribuicao |
                    controle_de_fluxo |
                    chamada_funcao |
                    bloco_de_comandos |
                    retorno;

declaracao_variavel_local : TK_IDENTIFICADOR inicializacao_variavel_local ',' declaracao_variavel_local | 
                            TK_IDENTIFICADOR  ',' declaracao_variavel_local |      
                            TK_IDENTIFICADOR  inicializacao_variavel_local |
                            TK_IDENTIFICADOR ;

inicializacao_variavel_local: TK_OC_LE literais; 

atribuicao: TK_IDENTIFICADOR '=' expressao | 
            TK_IDENTIFICADOR arranjo_multi '=' expressao

arranjo_multi:  '[' expressao ']' |
                '[' expressao  '^' lista_de_expressoes ']';

lista_de_expressoes: expressao '^' lista_de_expressoes | expressao;

retorno:  TK_PR_RETURN expressao;

controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos |
                   TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos |
                   TK_PR_WHILE '(' expressao ')' bloco_de_comandos

chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')'| TK_IDENTIFICADOR '('  ')';

lista_de_argumentos: argumento |
                     argumento ',' lista_de_argumentos;

argumento : expressao;

// PRECISARIA DE %left e %right PARA FUNCIONAR
// expressao:  TK_IDENTIFICADOR |
//             TK_IDENTIFICADOR '[' expressao ']' |
//             TK_IDENTIFICADOR '[' expressao  '^' lista_de_expressoes ']' |
//             literais |
//             chamada_funcao |
//             unarios_prefixados expressao |
//             expressao binarios expressao
//             expressao '*' expressao
//             expressao '<' expressao |
//             expressao '>' expressao |
//             expressao operadores_controles_de_fluxo expressao |
//             '(' expressao ')'
            
expressao: expressao TK_OC_OR sexta_precedencia |
           sexta_precedencia;

sexta_precedencia:  sexta_precedencia TK_OC_AND quinta_precedencia |
                    quinta_precedencia;

quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia |
                    quinta_precedencia TK_OC_NE quarta_precedencia |
                    quarta_precedencia;

quarta_precedencia: quarta_precedencia TK_OC_GE  terceira_precedencia |
                    quarta_precedencia TK_OC_LE  terceira_precedencia |
                    quarta_precedencia '>'  terceira_precedencia |
                    quarta_precedencia '<'  terceira_precedencia |
                    terceira_precedencia;

terceira_precedencia:   terceira_precedencia '-' segunda_precedencia |
                        terceira_precedencia '+' segunda_precedencia |
                        segunda_precedencia;

segunda_precedencia:    segunda_precedencia '%' primeira_precedencia |
                        segunda_precedencia '/' primeira_precedencia |
                        segunda_precedencia '*' primeira_precedencia |
                        primeira_precedencia;

primeira_precedencia:   '(' expressao ')' |
                        '!' primeira_precedencia |
                        '-' primeira_precedencia |
                        fator;

fator:  TK_IDENTIFICADOR '[' expressao  '^' lista_de_expressoes ']' |
        TK_IDENTIFICADOR '[' expressao ']' |
        literais |
        chamada_funcao |
        TK_IDENTIFICADOR ;

tipo: TK_PR_FLOAT|
      TK_PR_INT  |
      TK_PR_CHAR |
      TK_PR_BOOL;

literais:   TK_LIT_FLOAT |
            TK_LIT_INT |
            TK_LIT_CHAR |
            TK_LIT_TRUE |
            TK_LIT_FALSE;
                                     
%%
void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}