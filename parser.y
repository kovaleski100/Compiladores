/********************************************************************** 
 * INF01147 - Compiladores - Turma B (2022/1)                         *
 *                                                                    *
 *                                                                    *
 * André Carini                                                       *
 * Matheus Kovaleski                                                  *
 **********************************************************************/

%{
#include "tree.h"

extern int current_line_number;
extern tree *arvore;

int yylex(void);
void yyerror (char const *s);
%}

%start start

%union {
    struct tree* ast;
    struct symbol* valor_lexico;
}

%type<ast> start programa_ou_vazio funcao_ou_variavel_global variavel_global tipo_global_ou_retorno
%type<ast> lista_nao_vazia_identificadores variavel_ou_vetor tipos_primitivos funcao cabecalho_funcao
%type<ast> nome_da_funcao parametros_da_funcao parametro_funcao lista_nao_vazia_parametros_funcao
%type<ast> corpo_funcao bloco_de_comandos lista_comandos_simples comando_simples chamada_de_funcao
%type<ast> argumento lista_de_argumentos variavel literal lista_variaveis comandos_de_entrada_e_saida
%type<ast> programa declaracao_de_variavel comando_de_retorno_break_continue
%type<ast> expressao comando_de_atribuicao comandos_de_controle_de_fluxo comandos_de_shift

%right '='
%right '?' ':'
%left TK_OC_OR
%left TK_OC_AND
%left '|'
%left '&'
%left TK_OC_EQ TK_OC_NE
%left '<' '>' TK_OC_LE TK_OC_GE
%left TK_OC_SL TK_OC_SR
%left '+' '-'
%left '*' '/' '%'
%left '^'
%right '#' '!'

%token<valor_lexico> TK_PR_INT
%token<valor_lexico> TK_PR_FLOAT
%token<valor_lexico> TK_PR_BOOL
%token<valor_lexico> TK_PR_CHAR
%token<valor_lexico> TK_PR_STRING
%token<valor_lexico> TK_PR_IF
%token<valor_lexico> TK_PR_THEN
%token<valor_lexico> TK_PR_ELSE
%token<valor_lexico> TK_PR_WHILE
%token<valor_lexico> TK_PR_DO
%token<valor_lexico> TK_PR_INPUT
%token<valor_lexico> TK_PR_OUTPUT
%token<valor_lexico> TK_PR_RETURN
%token<valor_lexico> TK_PR_CONST
%token<valor_lexico> TK_PR_STATIC
%token<valor_lexico> TK_PR_FOREACH
%token<valor_lexico> TK_PR_FOR
%token<valor_lexico> TK_PR_SWITCH
%token<valor_lexico> TK_PR_CASE
%token<valor_lexico> TK_PR_BREAK
%token<valor_lexico> TK_PR_CONTINUE
%token<valor_lexico> TK_PR_CLASS
%token<valor_lexico> TK_PR_PRIVATE
%token<valor_lexico> TK_PR_PUBLIC
%token<valor_lexico> TK_PR_PROTECTED
%token<valor_lexico> TK_PR_END
%token<valor_lexico> TK_PR_DEFAULT
%token<valor_lexico> TK_OC_LE
%token<valor_lexico> TK_OC_GE
%token<valor_lexico> TK_OC_EQ
%token<valor_lexico> TK_OC_NE
%token<valor_lexico> TK_OC_AND
%token<valor_lexico> TK_OC_OR
%token<valor_lexico> TK_OC_SL
%token<valor_lexico> TK_OC_SR
%token<valor_lexico> TK_LIT_INT
%token<valor_lexico> TK_LIT_FLOAT
%token<valor_lexico> TK_LIT_FALSE
%token<valor_lexico> TK_LIT_TRUE
%token<valor_lexico> TK_LIT_CHAR
%token<valor_lexico> TK_LIT_STRING
%token<valor_lexico> TK_IDENTIFICADOR
%token<valor_lexico> TOKEN_ERRO

%token<valor_lexico> ')' '(' ']' '[' '}' '{' '-' '+' '?' '*' '/' '|' '>' '<' '!' '=' '&' '%' '#' '^' '$' ',' ';' ':' '.'

%%
start: programa_ou_vazio {arvore = $1;}

/* Seção 3: A Linguagem */
programa_ou_vazio
    : %empty {$$ = NULL;}
    | programa {$$ = $1;}
    ;

programa
    : funcao_ou_variavel_global {$$ = NULL;}
    | programa funcao_ou_variavel_global {$$ = $1; $$ = insert_child($$, $2);}
    ;

funcao_ou_variavel_global
    : funcao {$$ = $1;}
    | variavel_global {$$ = NULL;}
    ;

/* Seção 3.1: Declarações de Variáveis Globais */
variavel_global
    : tipo_global_ou_retorno lista_nao_vazia_identificadores ';' {$$ = NULL;}
    ;

tipo_global_ou_retorno
    : TK_PR_STATIC tipos_primitivos {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | tipos_primitivos {$$ = NULL;}
    ;

lista_nao_vazia_identificadores
    : variavel_ou_vetor {$$ = NULL;}
    | lista_nao_vazia_identificadores ',' variavel_ou_vetor {$$ = NULL;}
    ;

variavel_ou_vetor
    : TK_IDENTIFICADOR {$$ = insert_leaf($1);}
    | TK_IDENTIFICADOR '[' TK_LIT_INT ']' {$$ = insert_leaf($1); $$ = insert_leaf($3);} /* Deixaremos para a etapa semântica a validação do tamanho do array (maior que zero) */
    ;

tipos_primitivos
    : TK_PR_INT {$$ = insert_leaf($1);}
    | TK_PR_FLOAT {$$ = insert_leaf($1);}
    | TK_PR_CHAR {$$ = insert_leaf($1);}
    | TK_PR_BOOL {$$ = insert_leaf($1);}
    | TK_PR_STRING {$$ = insert_leaf($1);}
    ;

/* Seção 3.2: Definição de Funções */
funcao
    : cabecalho_funcao corpo_funcao {$$ = $1; $$ = insert_child($$, $2);}
    ;

cabecalho_funcao
    : tipo_global_ou_retorno nome_da_funcao parametros_da_funcao {$$ = insert_child($$, $1); $$ = insert_child($$, $2); $$ = insert_child($$, $3);}
    ;

nome_da_funcao
    : TK_IDENTIFICADOR {$$ = insert_leaf($1);}
    ;

parametros_da_funcao
    : '(' ')' {$$ = NULL;}
    | '(' lista_nao_vazia_parametros_funcao ')' {$$ = NULL;}
    ;

parametro_funcao
    : TK_PR_CONST tipos_primitivos TK_IDENTIFICADOR {$$ = insert_leaf($1); libera($2);}
    | tipos_primitivos TK_IDENTIFICADOR {$$ = NULL; libera($1);}
    ;

lista_nao_vazia_parametros_funcao
    : parametro_funcao {$$ = $1;}
    | lista_nao_vazia_parametros_funcao ',' parametro_funcao {$$ = $1; $$ = insert_child($$, $3);}
    ;

corpo_funcao
    : bloco_de_comandos {$$ = $1;}
    ;

/* Seção 3.3: Bloco de Comandos */ 

bloco_de_comandos
    : '{' lista_comandos_simples '}' {$$ = $2;}
    ;

lista_comandos_simples
    : comando_simples ';' lista_comandos_simples {$$ = $1; $$ = insert_child($$, $3);}
    |%empty {$$ = NULL;}
    ;

/* Seção 3.4: Comandos Simples */
comando_simples
    : bloco_de_comandos /* De acordo com 3.3, um bloco de comandos é um comando simples. */
    | declaracao_de_variavel {$$ = $1;}
    | comando_de_atribuicao {$$ = $1;}
    | comandos_de_entrada_e_saida {$$ = $1;}
    | chamada_de_funcao {$$ = $1;}
    | comando_de_retorno_break_continue {$$ = $1;}
    | comandos_de_controle_de_fluxo {$$ = $1;}
    | comandos_de_shift {$$ = $1;}
    ;

chamada_de_funcao
    : nome_da_funcao '(' ')' {$$ = $1;}
    | nome_da_funcao '(' argumento ')' {$$ = $1; $$ = $3;}
    | nome_da_funcao '(' lista_de_argumentos argumento ')' {$$ = $1; $$ = $3 ; $$ = $4;}
    ;

argumento
    : TK_IDENTIFICADOR {$$ = insert_leaf($1);}
    | literal {$$ = insert_child($$, $1);}
    ;

lista_de_argumentos
    : argumento {$$ = $1;}
    | lista_de_argumentos argumento ',' {$$ = $1; $$ = $2;}

/* 3.4 - A: Declaração de Variável */
    /* Abaixo, todas as permutações possíveis do uso de CONST e STATIC. */
declaracao_de_variavel
    : TK_PR_STATIC TK_PR_CONST tipos_primitivos lista_variaveis {$$ = insert_leaf($1);$$ = insert_leaf($2); $$ = insert_child($$, $3); $$ = insert_child($$, $4);}
    | TK_PR_STATIC tipos_primitivos lista_variaveis {$$ = insert_leaf($1);$$ = insert_child($$, $2); $$ = insert_child($$, $3);}
    | TK_PR_CONST tipos_primitivos lista_variaveis {$$ = insert_leaf($1);$$ = insert_child($$, $2); $$ = insert_child($$, $3);}
    | tipos_primitivos lista_variaveis {$$ = $1; $$ = $2;}
    ;

    /* Todos os tipos possíveis de variáveis. Só o identificador, ou o identificador já recebendo uma inicialização. */
variavel
    : TK_IDENTIFICADOR {$$ = insert_leaf($1);}
    | TK_IDENTIFICADOR TK_OC_LE TK_IDENTIFICADOR {$$ = insert_leaf($2); $$ = insert_leaf($1); $$ = insert_leaf($3);}
    | TK_IDENTIFICADOR TK_OC_LE literal {$$ = insert_leaf($2); $$ = insert_leaf($1); $$ = insert_child($$, $3);}
    ;

literal
    : TK_LIT_INT {$$ = insert_leaf($1);}
    | TK_LIT_CHAR {$$ = insert_leaf($1);}
    | TK_LIT_TRUE {$$ = insert_leaf($1);}
    | TK_LIT_FALSE {$$ = insert_leaf($1);}
    | TK_LIT_FLOAT {$$ = insert_leaf($1);}
    | TK_LIT_STRING {$$ = insert_leaf($1);}
    ;

lista_variaveis
    : variavel {$$ = $1;}
    | lista_variaveis ',' variavel {$$ = NULL; $$ = $1;}
    ;

/* 3.4 - C: Comandos de Entrada e Saída */
comandos_de_entrada_e_saida
    : TK_PR_INPUT TK_IDENTIFICADOR {$$ = insert_leaf($1); $$ = insert_leaf($2);}
    | TK_PR_OUTPUT TK_IDENTIFICADOR {$$ = insert_leaf($1); $$ = insert_leaf($2);}
    | TK_PR_OUTPUT literal {$$ = insert_leaf($1); $$ = insert_child($$, $2);}

comando_de_retorno_break_continue
    : TK_PR_BREAK {$$ = insert_leaf($1);}
    | TK_PR_CONTINUE {$$ = insert_leaf($1);}
    | TK_PR_RETURN expressao {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    ;
expressao
    : argumento {$$ = $1;}
    | '(' expressao ')' {$$ = $2;}
    | '+' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | '-' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | '!' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | '&' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | '*' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | '?' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | '#' expressao {$$ = insert_leaf($1);$$ = insert_child($$, $2);}
    | expressao '+' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '-' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '*' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '/' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '%' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '|' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '&' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '^' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '>' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao '<' expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao TK_OC_LE expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | expressao TK_OC_GE expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | expressao TK_OC_EQ expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | expressao TK_OC_NE expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | expressao TK_OC_AND expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1);$$ = insert_child($$, $3);}
    | expressao TK_OC_OR expressao {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | expressao '?' expressao ':' expressao {$$ = insert_leaf($2); $$->data->lv.v.s = "?:"; $$->data->token_t = COMPOSE_OP; $$ = insert_child($$, $1); $$ = insert_child($$,$3);$$ = insert_child($$, $5);}
    ;

comandos_de_controle_de_fluxo
    : TK_PR_IF '(' expressao ')' bloco_de_comandos {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_child($$, $5);}
    | TK_PR_IF '(' expressao ')' bloco_de_comandos TK_PR_ELSE bloco_de_comandos {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_child($$, $5); $$ = insert_leaf($6); $$ = insert_child($$,$7);}
    | TK_PR_FOR '(' comando_de_atribuicao ':' expressao ':' comando_de_atribuicao ')' bloco_de_comandos {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_child($$, $5); $$ = insert_child($$,$7);}
    | TK_PR_WHILE '(' expressao ')' TK_PR_DO bloco_de_comandos {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_leaf($5); $$ = insert_child($$, $6);}
    ;

comando_de_atribuicao
    : TK_IDENTIFICADOR '=' expressao {$$ = insert_leaf($1); $$ = insert_child($$, $3);}
    | TK_IDENTIFICADOR '[' expressao ']' '=' expressao {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_child($$, $6);}
    ;
    
comandos_de_shift
    : TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT {$$ = insert_leaf($1); $$ = insert_leaf($2); $$ = insert_leaf($3);}
    | TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT {$$ = insert_leaf($1); $$ = insert_leaf($2); $$ = insert_leaf($3);}
    | TK_IDENTIFICADOR '[' expressao ']' TK_OC_SL TK_LIT_INT {$$ = insert_leaf($1); $$ = insert_child($$,$3); $$ = insert_leaf($5); $$ = insert_leaf($6);}
    | TK_IDENTIFICADOR '[' expressao ']' TK_OC_SR TK_LIT_INT {$$ = insert_leaf($1); $$ = insert_child($$,$3); $$ = insert_leaf($5); $$ = insert_leaf($6);}
    ;

%%

void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}