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

// %type<no> arranjo_opcional
// %type<no> nivel7 //setima_precedencia

%type<no> inicio
%type<no> programa
// %type<no> tipo
// %type<no> sexta_precedencia
// %type<no> quinta_precedencia
// %type<no> quarta_precedencia
// %type<no> terceira_precedencia
// %type<no> segunda_precedencia
// %type<no> primeira_precedencia
// %type<no> expressao
// %type<no> literais
// %type<no> retorno
%type<no> lista_de_elementos

%type<no> teste
%type<no> teste_literais
%type<no> teste_literais2

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

%start inicio
%%

//arrajo_opcional: ;
//arranjo_opcional: {$$ = null;} ;

inicio: programa {arvore = $1; printf("aqui\n");};
programa: lista_de_elementos {$$ = $1; printf("aqui\n");};

lista_de_elementos:     teste ';'{$$ = $1; printf("aqui\n");};
                        // declaracao |
                        // lista_de_elementos declaracao |
                        // lista_de_elementos funcao |
                        // funcao;

teste: teste_literais '+' teste_literais2 {$$ = create_node(operador_composto, '+'); $$ = add_child($$, $1);$$ = add_child($$, $3);};
teste_literais2: teste_literais '-' teste_literais {{$$ = create_node(operador_composto, '-');$$ = add_child($$, $1);$$ = add_child($$, $3);}};
teste_literais: TK_LIT_INT {{$$ = create_node(literal_inteiro, $1);}};


// declaracao: tipo lista_identificador;

// lista_identificador:    TK_IDENTIFICADOR array ',' lista_identificador |
//                         TK_IDENTIFICADOR array ';';

// array:      '[' TK_LIT_INT ']' // |
//             '[' TK_LIT_INT '^' lista_de_literais_inteiros ']' | ;

// lista_de_literais_inteiros :    TK_LIT_INT '^' lista_de_literais_inteiros |
//                                 TK_LIT_INT;

// funcao: cabecalho corpo {add_child($1, $2)}; /TESTAR

// corpo: bloco_de_comandos {$$ = $1};

// cabecalho:  tipo TK_IDENTIFICADOR '(' ')' |
//             tipo TK_IDENTIFICADOR '(' lista_funcao ')';

// lista_funcao:   parametro_funcao ',' lista_funcao |
//                 parametro_funcao;

// parametro_funcao: tipo TK_IDENTIFICADOR;

// bloco_de_comandos: '{' comandos '}' {$$ = $2}| 
//                    '{' '}' {$$ = NULL;}; //correto

// comandos:   comandos_simples ';' comandos {$$ = create_node(); $$ = $3;}| //Duvida 
//             comandos_simples ';' {$$ = create_node()};

// comandos_simples:   tipo declaracao_variavel_local | 
//                     atribuicao |
//                     controle_de_fluxo |
//                     chamada_funcao |
//                     bloco_de_comandos |
//                     retorno;

// declaracao_variavel_local : TK_IDENTIFICADOR inicializacao_variavel_local ',' declaracao_variavel_local | 
//                             TK_IDENTIFICADOR  ',' declaracao_variavel_local |      
//                             TK_IDENTIFICADOR  inicializacao_variavel_local |
//                             TK_IDENTIFICADOR ;

// inicializacao_variavel_local: TK_OC_LE literais; 

// atribuicao: TK_IDENTIFICADOR '=' expressao | 
//             TK_IDENTIFICADOR arranjo_multi '=' expressao

// arranjo_multi:  '[' expressao ']' {$$ = $2} |
//                 '[' expressao  '^' lista_de_expressoes ']';

// lista_de_expressoes: expressao '^' lista_de_expressoes | expressao;


// retorno:  TK_PR_RETURN expressao {$$ = create_node(TK_PR_RETURN, $1); $$ = $2};


// controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos |
//                    TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos |
//                    TK_PR_WHILE '(' expressao ')' bloco_de_comandos

// chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')'| TK_IDENTIFICADOR '('  ')';

// lista_de_argumentos: argumento {$$ = $1} |
//                      argumento ',' lista_de_argumentos {$$ = $1};

// argumento : expressao {$$ = $1};
            
// expressao: expressao TK_OC_OR sexta_precedencia | //{$$ = create_node(operador_composto, '||'); add_child($$, $1); add_child($$, $3);} |
//            sexta_precedencia {$$ = $1};

// sexta_precedencia:  sexta_precedencia TK_OC_AND quinta_precedencia | // {$$ = create_node(operador_composto, '&&'); add_child($$, $1); add_child($$, $3);} |
//                     quinta_precedencia {$$ = $1};

// quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia | //{$$ = create_node(operador_composto, '='); add_child($$, $1); add_child($$, $3);} |
//                     quinta_precedencia TK_OC_NE quarta_precedencia | //{$$ = create_node(operador_composto, '!-'); add_child($$, $1); add_child($$, $3);} |
//                     quarta_precedencia {$$ = $1};

// quarta_precedencia: quarta_precedencia TK_OC_GE  terceira_precedencia | //{$$ = create_node(operador_composto, '>='); add_child($$, $1); add_child($$, $3);} |
//                     quarta_precedencia TK_OC_LE  terceira_precedencia | //{$$ = create_node(operador_composto, '<='); add_child($$, $1); add_child($$, $3);} |
//                     quarta_precedencia '>'  terceira_precedencia | //{$$ = create_node(operador_simples, '>'); add_child($$, $1); add_child($$, $3);} |
//                     quarta_precedencia '<'  terceira_precedencia | //{$$ = create_node(operador_simples, '<'); add_child($$, $1); add_child($$, $3);} |
//                     terceira_precedencia {$$ = $1};

// terceira_precedencia:   terceira_precedencia '-' segunda_precedencia | //{$$ = create_node(operador_simples, '-'); add_child($$, $1); add_child($$, $3);} |
//                         terceira_precedencia '+' segunda_precedencia | //{$$ = create_node(operador_simples, '+'); add_child($$, $1); add_child($$, $3);} |
//                         segunda_precedencia {$$ = $1};

// segunda_precedencia:    segunda_precedencia '%' primeira_precedencia | //{$$ = create_node(operador_simples, '%'); add_child($$, $1); add_child($$, $3);} |
//                         segunda_precedencia '/' primeira_precedencia | //{$$ = create_node(operador_simples, '/'); add_child($$, $1); add_child($$, $3);} |
//                         segunda_precedencia '*' primeira_precedencia | //{$$ = create_node(operador_simples, '*'); add_child($$, $1); add_child($$, $3);} |
//                         primeira_precedencia {$$ = $1};

// primeira_precedencia:   '(' expressao ')' | //{$$ = $2;} |
//                         '!' primeira_precedencia | //{$$ = create_node(operador_unario, '!') ; add_child($$, $2);} |
//                         '-' primeira_precedencia | //{$$ = create_node(operador_unario, $1); $$ = add_child($$, $2);} |
//                         // fator {$$ = $1;};
//                         fator {$$ = $1;};

// fator:  TK_IDENTIFICADOR '[' expressao  '^' lista_de_expressoes ']' |
//         TK_IDENTIFICADOR '[' expressao ']' |
//         literais |
//         chamada_funcao |
//         TK_IDENTIFICADOR;
//         id

// tipo: TK_PR_FLOAT {$$ = TK_PR_FLOAT;} | //{$$ = create_node_from_token(TIPO_FLOAT, $1);};|
//       TK_PR_INT  {$$ = TK_PR_INT;}  |
//       TK_PR_CHAR {$$ = TK_PR_CHAR;} |
//       TK_PR_BOOL {$$ = TK_PR_BOOL;};

// literais:   TK_LIT_FLOAT  {$$ = create_node(literal_float, $1);}| // {$$ = create_leaf(LIT_FLOAT, $1);}; |
//             TK_LIT_INT    {$$ = create_node(literal_inteiro, $1);}| //{$$ = create_leaf(LIT_INT, $1);};|
//             TK_LIT_CHAR   {$$ = create_node(literal_char, $1);}| //{$$ = create_leaf(LIT_CHAR, $1);};|
//             TK_LIT_TRUE   {$$ = create_node(literal_bool, $1);}| //{$$ = create_leaf(LIT_TRUE, $1);};|
//             TK_LIT_FALSE  {$$ = create_node(literal_bool, $1);}; //{$$ = create_leaf(LIT_FALSE, $1);};;
                                
//identificador: {$$  TK_IDENTIFICADOR= create_node_from_token(IDENTIFICADOR, $1);}; // create_leaf
//id: {$$ = create_node(identificador, $1)}
//filho do if sem else, colocar como filho nulo
%%
void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}
