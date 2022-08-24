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

%start programa

%%

/* Seção 3: A Linguagem */
programa
    : %empty
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
    : lista_identificadores variavel_ou_vetor
    ;

lista_identificadores
    : %empty
    | lista_identificadores variavel_ou_vetor ','
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
    : '(' parametro_funcao ')'
    | '(' lista_parametros_funcao parametro_funcao ')'
    ;

parametro_funcao
    : TK_PR_CONST tipos_primitivos TK_IDENTIFICADOR
    | tipos_primitivos TK_IDENTIFICADOR
    ;

lista_parametros_funcao
    : %empty
    | lista_parametros_funcao parametro_funcao ','
    ;

corpo_funcao
    : bloco_de_comandos
    ;

/* Seção 3.3: Bloco de Comandos */ 
bloco_de_comandos
    : '{' lista_comandos_simples '}'
    ;

lista_comandos_simples
    : %empty
    | lista_comandos_simples comando_simples
    ;

/* Seção 3.4: Comandos Simples */
comando_simples
    : bloco_de_comandos ';' /* De acordo com 3.3, um bloco de comandos é um comando simples. */
    | declaracao_de_variavel ';'
    | comando_de_atribuicao ';'
    | comandos_de_entrada_e_saida ';'
    | chamada_de_funcao ';'
    | comandos_de_shift ';' F
    | comando_de_retorno_break_continue ';'
    | comandos_de_controle_de_fluxo ';'
    ;

/* 3.4 - A: Declaração de Variável */
    /* Abaixo, todas as permutações possíveis do uso de CONST e STATIC. */
declaracao_de_variavel
    : TK_PR_STATIC TK_PR_CONST tipos_primitivos lista_variaveis variavel
    | TK_PR_STATIC tipos_primitivos lista_variaveis variavel
    | TK_PR_CONST tipos_primitivos lista_variaveis variavel
    | tipos_primitivos lista_variaveis variavel
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
    : %empty
    | lista_variaveis variavel ','
    ;

/* 3.4 - B: Comando de Atribuição */
comando_de_atribuicao
    : TK_IDENTIFICADOR '=' expressao
    | TK_IDENTIFICADOR '[' expressao ']' '=' expressao
    ;

/* 3.4 - C: Comandos de Entrada e Saída */
comandos_de_entrada_e_saida
    : TK_PR_INPUT TK_IDENTIFICADOR
    | TK_PR_OUTPUT TK_IDENTIFICADOR
    | TK_PR_OUTPUT literal

/* 3.4 - D: Chamada de Função */
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
    : %empty
    | lista_de_argumentos argumento ','
    ;

/* 3.4 - E: Comandos de Shift */
comandos_de_shift
    : TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT
    | TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT
    | TK_IDENTIFICADOR '[' expressao ']' TK_OC_SL TK_LIT_INT
    | TK_IDENTIFICADOR '[' expressao ']' TK_OC_SR TK_LIT_INT
    ;

/* 3.4 - F: Comando de Retorno, Break, Continue */
comando_de_retorno_break_continue
    : TK_PR_BREAK
    | TK_PR_CONTINUE
    | TK_PR_RETURN expressao
    ;

/* 3.4 - G: Comandos de Controle de Fluxo */
comandos_de_controle_de_fluxo
    : TK_PR_IF '(' expressao ')' bloco_de_comandos
    | TK_PR_IF '(' expressao ')' bloco_de_comandos TK_PR_ELSE bloco_de_comandos
    | TK_PR_FOR '(' comando_de_atribuicao ':' expressao ':' comando_de_atribuicao ')' bloco_de_comandos
    | TK_PR_WHILE '(' expressao ')' TK_PR_DO bloco_de_comandos
    ;

/* 3.5: Expressões Aritméticas e Lógicas */
expressao
    : expressao_aritmetica
    | expressao_logica
    ;

expressao_aritmetica
    : TK_IDENTIFICADOR
    | TK_IDENTIFICADOR '[' expressao ']'
    | TK_LIT_INT
    | TK_LIT_FLOAT
    | chamada_de_funcao
    ;

expressao_logica
    : '+' expressao_aritmetica
    | '-' expressao_aritmetica
    | '!' expressao_logica
    | '&' expressao_aritmetica
    | '*' expressao_aritmetica
    | '?' expressao
    | '#' TK_IDENTIFICADOR
    | expressao '+' expressao
    | expressao '-' expressao
    | expressao '*' expressao
    | expressao '/' expressao
    | expressao '%' expressao
    | expressao '|' expressao
    | expressao '&' expressao
    | expressao '^' expressao
    | expressao '>' expressao
    | expressao '<' expressao
    | expressao TK_OC_LE expressao
    | expressao TK_OC_GE expressao
    | expressao TK_OC_EQ expressao
    | expressao TK_OC_NE expressao
    | expressao TK_OC_AND expressao
    | expressao TK_OC_OR expressao
    | expressao '?' expressao ':' expressao
    ;

%%

void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}