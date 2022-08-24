/********************************************************************** 
 * INF01147 - Compiladores - Turma B (2022/1)                         *
 *                                                                    *
 *                                                                    *
 * André Carini                                                       *
 * Matheus Kovaleski                                                  *
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
%token TK_PR_STRING
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_CONST
%token TK_PR_STATIC
%token TK_PR_FOREACH
%token TK_PR_FOR
%token TK_PR_SWITCH
%token TK_PR_CASE
%token TK_PR_BREAK
%token TK_PR_CONTINUE
%token TK_PR_CLASS
%token TK_PR_PRIVATE
%token TK_PR_PUBLIC
%token TK_PR_PROTECTED
%token TK_PR_END
%token TK_PR_DEFAULT
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_OC_SL
%token TK_OC_SR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_LIT_STRING
%token TK_IDENTIFICADOR
%token TOKEN_ERRO

%start programa_ou_vazio

%%

/* Seção 3: A Linguagem */
programa_ou_vazio
    : %empty
    | programa
    ;

programa
    : funcao_ou_variavel_global
    | programa funcao_ou_variavel_global
    ;

funcao_ou_variavel_global
    : funcao
    | variavel_global
    ;

/* Seção 3.1: Declarações de Variáveis Globais */
variavel_global
    : tipo_global_ou_retorno lista_nao_vazia_identificadores ';'
    ;

tipo_global_ou_retorno
    : TK_PR_STATIC tipos_primitivos
    | tipos_primitivos
    ;

lista_nao_vazia_identificadores
    : variavel_ou_vetor
    | lista_nao_vazia_identificadores ',' variavel_ou_vetor
    ;

variavel_ou_vetor
    : TK_IDENTIFICADOR
    | TK_IDENTIFICADOR '[' TK_LIT_INT ']' /* Deixaremos para a etapa semântica a validação do tamanho do array (maior que zero) */
    ;

tipos_primitivos
    : TK_PR_INT
    | TK_PR_FLOAT
    | TK_PR_CHAR
    | TK_PR_BOOL
    | TK_PR_STRING
    ;

/* Seção 3.2: Definição de Funções */
funcao
    : cabecalho_funcao corpo_funcao
    ;

cabecalho_funcao
    : tipo_global_ou_retorno nome_da_funcao parametros_da_funcao
    ;

nome_da_funcao
    : TK_IDENTIFICADOR
    ;

parametros_da_funcao
    : '(' ')'
    | '(' lista_nao_vazia_parametros_funcao ')'
    ;

parametro_funcao
    : TK_PR_CONST tipos_primitivos TK_IDENTIFICADOR
    | tipos_primitivos TK_IDENTIFICADOR
    ;

lista_nao_vazia_parametros_funcao
    : parametro_funcao
    | lista_nao_vazia_parametros_funcao ',' parametro_funcao
    ;

corpo_funcao
    : bloco_de_comandos
    ;

/* Seção 3.3: Bloco de Comandos */ 

bloco_de_comandos
    : '{' lista_comandos_simples '}'
    ;

lista_comandos_simples
    : comando_simples ';' lista_comandos_simples
    |%empty
    ;

/* Seção 3.4: Comandos Simples */
comando_simples
    : bloco_de_comandos /* De acordo com 3.3, um bloco de comandos é um comando simples. */
    | declaracao_de_variavel
    | chamada_de_funcao
    | comandos_de_entrada_e_saida
    | comando_de_retorno_break_continue
    ;

chamada_de_funcao
    : nome_da_funcao '(' ')'
    | nome_da_funcao '(' argumento ')'
    | nome_da_funcao '(' lista_de_argumentos argumento ')'
    ;

argumento
    : TK_IDENTIFICADOR
    | literal
    ;

lista_de_argumentos
    : argumento
    | lista_de_argumentos argumento ','

/* 3.4 - A: Declaração de Variável */
    /* Abaixo, todas as permutações possíveis do uso de CONST e STATIC. */
declaracao_de_variavel
    : TK_PR_STATIC TK_PR_CONST tipos_primitivos lista_variaveis
    | TK_PR_STATIC tipos_primitivos lista_variaveis
    | TK_PR_CONST tipos_primitivos lista_variaveis
    | tipos_primitivos lista_variaveis
    ;

    /* Todos os tipos possíveis de variáveis. Só o identificador, ou o identificador já recebendo uma inicialização. */
variavel
    : TK_IDENTIFICADOR
    | TK_IDENTIFICADOR TK_OC_LE TK_IDENTIFICADOR
    | TK_IDENTIFICADOR TK_OC_LE literal
    ;

literal
    : TK_LIT_INT
    | TK_LIT_CHAR
    | TK_LIT_TRUE
    | TK_LIT_FALSE
    | TK_LIT_FLOAT
    | TK_LIT_STRING
    ;

lista_variaveis
    : variavel
    | lista_variaveis ',' variavel 
    ;

/* 3.4 - C: Comandos de Entrada e Saída */
comandos_de_entrada_e_saida
    : TK_PR_INPUT TK_IDENTIFICADOR
    | TK_PR_OUTPUT TK_IDENTIFICADOR
    | TK_PR_OUTPUT literal

comando_de_retorno_break_continue
    : TK_PR_BREAK
    | TK_PR_CONTINUE
    | TK_PR_RETURN expressao
    ;

expressao
    : expressao_unaria
    | expressao_binaria
    ;

expressao_unaria
    : '+' expressao_unaria
    | '-' expressao_unaria
    | '!' expressao_unaria
    | '&' expressao_unaria
    | '*' expressao_unaria
    | '?' expressao_unaria
    | '#' TK_IDENTIFICADOR
    | literal
    ;

expressao_binaria
    : expressao_binaria
    | expressao_binaria '+' expressao_binaria
    ;

%%

void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}