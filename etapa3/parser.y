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
#include "ast.h"
extern int current_line_number;
extern void *arvore;
int yylex(void);
void yyerror (char const *s);
int yydebug=1;
%}

%union{
 struct ast *no;
 struct valor_lexico *valor_lexico; // etapa3 - 2.1 
}
%type<no> inicio
%type<no> programa
%type<no> corpo
%type<no> cabecalho
%type<no> lista_funcao
%type<no> parametro_funcao
%type<no> lista_de_elementos
%type<no> array
%type<no> lista_de_literais_inteiros
%type<no> lista_identificador
%type<no> inicializacao_variavel_local
%type<no> declaracao_variavel_local
%type<no> expressao
%type<no> comandos
%type<no> retorno
%type<no> bloco_de_comandos
%type<no> controle_de_fluxo
%type<no> lista_de_expressoes
%type<no> lista_de_argumentos
%type<no> atribuicao
%type<no> comandos_simples
%type<no> arranjo_multi
%type<no> expressao_aux
%type<no> funcao
%type<no> declaracao
%type<no> chamada_funcao
%type<no> argumento
%type<no> sexta_precedencia
%type<no> quinta_precedencia
%type<no> quarta_precedencia
%type<no> terceira_precedencia
%type<no> segunda_precedencia
%type<no> primeira_precedencia
%type<no> fator
%type<no> tipo
%type<no> literais

%type<no> ID
%type<no> litInt

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token <valor_lexico> TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token <valor_lexico> TK_PR_WHILE
%token <valor_lexico> TK_PR_INPUT
%token <valor_lexico> TK_PR_OUTPUT
%token <valor_lexico> TK_PR_RETURN
%token <valor_lexico> TK_PR_FOR
%token <valor_lexico> TK_OC_LE
%token <valor_lexico> TK_OC_GE
%token <valor_lexico> TK_OC_EQ
%token <valor_lexico> TK_OC_NE
%token <valor_lexico> TK_OC_AND
%token <valor_lexico> TK_OC_OR
%token <valor_lexico> TK_LIT_INT
%token <valor_lexico> TK_LIT_FLOAT
%token <valor_lexico> TK_LIT_FALSE
%token <valor_lexico> TK_LIT_TRUE
%token <valor_lexico> TK_LIT_CHAR
%token <valor_lexico> TK_IDENTIFICADOR
%token TK_ERRO
%token CALL
%token <valor_lexico> '+'
%token <valor_lexico> '-'
%token <valor_lexico> '!'
%token <valor_lexico> '*'
%token <valor_lexico> '/'
%token <valor_lexico> '%'
%token <valor_lexico> '>'
%token <valor_lexico> '<'
%token <valor_lexico> '='
%token <valor_lexico> '&'
%token <valor_lexico> '|'
%token <valor_lexico> '['
%token <valor_lexico> ']'
%token <valor_lexico> '{'
%token <valor_lexico> '}'
%token <valor_lexico> '^'

%start inicio
%%

inicio: programa {arvore = $1;} | ;
programa: lista_de_elementos {$$ = $1;}; //REVISAR

lista_de_elementos:     declaracao {$$ = $1;}|
                        lista_de_elementos declaracao {$$ = $2; add_child($$, $1);}|
                        lista_de_elementos funcao {$$ = $2; add_child($$, $1);}|
                        funcao {$$ = $1;};

declaracao: tipo lista_identificador {$$ = $2;};

lista_identificador:    TK_IDENTIFICADOR array ',' lista_identificador {$$ = create_node(identificador, $1); $$ = add_child($$, $2);$$ = add_child($$, $4);}|
                        TK_IDENTIFICADOR array ';' {$$ = create_node(identificador, $1); $$ = add_child($$, $2);};

array:      '[' litInt ']'|
            '[' litInt '^' lista_de_literais_inteiros ']'  {$$ = create_node(caracter_especial, $3); $$ = add_child($$, $2); $$ = add_child($$, $4);}| ;

lista_de_literais_inteiros :    litInt '^' lista_de_literais_inteiros {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);}|
                                TK_LIT_INT {$$ = create_node(literal_inteiro, $1);};

funcao: cabecalho corpo {$$ = $1; add_child($$, $2);};

corpo: bloco_de_comandos {$$ = $1;};

cabecalho:  tipo TK_IDENTIFICADOR '(' ')' {$$ = create_node(identificador, $2);}|
            tipo TK_IDENTIFICADOR '(' lista_funcao ')' {$$ = create_node(identificador, $2); $$ = add_child($$, $4);};

lista_funcao:   parametro_funcao ',' lista_funcao | // REVISAR
                parametro_funcao {$$ = $1;};

parametro_funcao: tipo ID;

bloco_de_comandos: '{' comandos '}'  { $$ = $2;}| 
                   '{' '}'; // REVISAR PRINT

comandos:   comandos_simples ';' comandos |  // REVISAR
            comandos_simples ';' {$$ = $1;};

comandos_simples:   tipo declaracao_variavel_local {$$ = $2;}| 
                    atribuicao {$$ = $1;}|
                    controle_de_fluxo {$$ = $1;}|
                    chamada_funcao {$$ = $1;}|
                    bloco_de_comandos {$$ = $1;}|
                    retorno {$$ = $1;};

declaracao_variavel_local : inicializacao_variavel_local ',' declaracao_variavel_local |  // REVISAR
                            ID  ',' declaracao_variavel_local |      
                            inicializacao_variavel_local {$$ = $1;} |
                            ID ;

inicializacao_variavel_local: ID TK_OC_LE literais {$$ = create_node(caracter_especial, $2); $$ = add_child($$,$1); $$ = add_child($$,$3);}; 




// declaracao_variavel_local : TK_IDENTIFICADOR inicializacao_variavel_local ',' declaracao_variavel_local | 
//                             TK_IDENTIFICADOR  ',' declaracao_variavel_local |      
//                             TK_IDENTIFICADOR  inicializacao_variavel_local |
//                             TK_IDENTIFICADOR ;

// inicializacao_variavel_local: TK_OC_LE literais; 





// atribuicao: TK_IDENTIFICADOR '=' expressao | 
//             TK_IDENTIFICADOR arranjo_multi '=' expressao

// arranjo_multi:  '[' expressao ']' |
//                 '[' expressao  '^' lista_de_expressoes ']';

atribuicao: ID '=' expressao {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);}|  // TESTAR
            arranjo_multi '=' expressao  {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);}

arranjo_multi:  ID '[' expressao ']' {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);}|
                ID '[' expressao_aux ']' {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);};

// lista_de_expressoes: expressao '^' lista_de_expressoes | expressao;

// arranjo_multi:  ID '[' expressao ']' {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);}|


expressao_aux :  expressao  '^' lista_de_expressoes  {$$ = create_node(caracter_especial, $2); add_child($$,$1); add_child($$, $3);};

lista_de_expressoes: expressao '^' lista_de_expressoes {$$ = create_node(caracter_especial, $2); add_child($$,$1); add_child($$, $3);}|
                     expressao {$$ = $1;};

// lista_de_expressoes: lista_de_expressoes '^' expressao |
//                      expressao


retorno:  TK_PR_RETURN expressao {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $2);};

controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $3); $$ = add_child($$, $6);}|
                   TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $3); $$ = add_child($$, $6); $$ = add_child($$, $8);}|
                   TK_PR_WHILE '(' expressao ')' bloco_de_comandos {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $3); $$ = add_child($$, $5);}

chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')' {$$ = create_node(call,$1); $$ = add_child($$, $3);}|
                TK_IDENTIFICADOR '('  ')' {$$ = create_node(call,$1);};

lista_de_argumentos: argumento {$$ = $1;}|
                     argumento ',' lista_de_argumentos; // REVISAR

argumento : expressao {$$ = $1;};

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
            
expressao: expressao TK_OC_OR sexta_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
           sexta_precedencia {$$ = $1;};

sexta_precedencia:  sexta_precedencia TK_OC_AND quinta_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    quinta_precedencia {$$ = $1;};

quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    quinta_precedencia TK_OC_NE quarta_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    quarta_precedencia {$$ = $1;};

quarta_precedencia: quarta_precedencia TK_OC_GE  terceira_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    quarta_precedencia TK_OC_LE  terceira_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    quarta_precedencia '>'  terceira_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    quarta_precedencia '<'  terceira_precedencia {$$ = create_node(caracter_especial, $2);$$ =  add_child($$, $1); $$ = add_child($$, $3);}|
                    terceira_precedencia {$$ = $1;};

terceira_precedencia:   terceira_precedencia '-' segunda_precedencia {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);} |
                        terceira_precedencia '+' segunda_precedencia {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);} |
                        segunda_precedencia {$$ = $1;};

segunda_precedencia:    segunda_precedencia '%' primeira_precedencia {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);} |
                        segunda_precedencia '/' primeira_precedencia {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);} |
                        segunda_precedencia '*' primeira_precedencia {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);} |
                        primeira_precedencia {$$ = $1;};

primeira_precedencia:   '(' expressao ')' {$$ = $2;}|
                        '!' primeira_precedencia {$$ = create_node(caracter_especial, $1) ; $$ = add_child($$, $2);}|
                        '-' primeira_precedencia {$$ = create_node(caracter_especial, $1); $$ = add_child($$, $2);} |
                        fator {$$ = $1;};

fator:  arranjo_multi {$$ = $1;} |
        literais |
        chamada_funcao {$$ = $1;} |
        ID;

        //TK_IDENTIFICADOR '[' expressao  '^' lista_de_expressoes ']' {$$ = create_node(caracter_especial, $4); $$ = addChild($$, $3); $$ = addChild($$, $5); $$ = create_node(caracter_especial, '[]'); $$ = addChild($$, create_node(identificador, $1)); $$ = addChild($$,)} //{$$ = create_node(caracter_especial, '[]'); $$ = addChild($$, create_node(identificador, $1)); $$ = addChild($$, create_node(caracter_especial, $4));}
        // TK_IDENTIFICADOR '[' expressao ']' {$$ = create_node(caracter_especial, '[]'); $$ = addChild($$, create_node(identificador, $1)); $$ = addChild($$, $3)} |

tipo: TK_PR_FLOAT {$$ = TK_PR_FLOAT;} | //{$$ = create_node_from_token(TIPO_FLOAT, $1);};|
      TK_PR_INT  {$$ = TK_PR_INT;}  |
      TK_PR_CHAR {$$ = TK_PR_CHAR;} |
      TK_PR_BOOL {$$ = TK_PR_BOOL;};

literais:   TK_LIT_FLOAT  {$$ = create_node(literal_float, $1);}| // {$$ = create_leaf(LIT_FLOAT, $1);}; |
            TK_LIT_INT    {$$ = create_node(literal_inteiro, $1);}| //{$$ = create_leaf(LIT_INT, $1);};|
            TK_LIT_CHAR   {$$ = create_node(literal_char, $1);}| //{$$ = create_leaf(LIT_CHAR, $1);};|
            TK_LIT_TRUE   {$$ = create_node(literal_bool, $1);}| //{$$ = create_leaf(LIT_TRUE, $1);};|
            TK_LIT_FALSE  {$$ = create_node(literal_bool, $1);}; //{$$ = create_leaf(LIT_FALSE, $1);};;

litInt:  TK_LIT_INT  {$$ = create_node(literal_inteiro, $1);}

ID: TK_IDENTIFICADOR {$$ = create_node(identificador, $1);};                          
%%
void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}