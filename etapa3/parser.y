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
int yydebug=1
%}

%union{
 node_t *no;
 valor_t *valor_lexico; // etapa3 - 2.1 
}

%type<no> arranjo_opcional
%type<no> nivel7 //setima_precedencia

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

%start programa
%%

//arrajo_opcional: ;
//arranjo_opcional: {$$ = null;} ;

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
            
expressao: expressao TK_OC_OR sexta_precedencia {$$ = create_node(OU_LOGICO, '||'); add_child($$, $1); add_child($$, $3);} |
           sexta_precedencia;

sexta_precedencia:  sexta_precedencia TK_OC_AND quinta_precedencia {$$ = create_node(E_LOGICO, '&&'); add_child($$, $1); add_child($$, $3);} |
                    quinta_precedencia;

quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia {$$ = create_node(IGUAL, '='); add_child($$, $1); add_child($$, $3);} |
                    quinta_precedencia TK_OC_NE quarta_precedencia {$$ = create_node(DIFERENTE, '!-'); add_child($$, $1); add_child($$, $3);} |
                    quarta_precedencia;

quarta_precedencia: quarta_precedencia TK_OC_GE  terceira_precedencia {$$ = create_node(MAIOR_IGUAL, '>='); add_child($$, $1); add_child($$, $3);} |
                    quarta_precedencia TK_OC_LE  terceira_precedencia {$$ = create_node(MENOR_IGUAL, '<='); add_child($$, $1); add_child($$, $3);} |
                    quarta_precedencia '>'  terceira_precedencia {$$ = create_node(MAIOR_QUE, '>'); add_child($$, $1); add_child($$, $3);} |
                    quarta_precedencia '<'  terceira_precedencia {$$ = create_node(MENOR_QUE, '<'); add_child($$, $1); add_child($$, $3);} |
                    terceira_precedencia;

terceira_precedencia:   terceira_precedencia '-' segunda_precedencia {$$ = create_node(SUBSTRACAO_BINARIA, '-'); add_child($$, $1); add_child($$, $3);} |
                        terceira_precedencia '+' segunda_precedencia {$$ = create_node(SOMA_BINARIA, '+'); add_child($$, $1); add_child($$, $3);} |
                        segunda_precedencia;

segunda_precedencia:    segunda_precedencia '%' primeira_precedencia {$$ = create_node(RESTO_BINARIO, '%'); add_child($$, $1); add_child($$, $3);} |
                        segunda_precedencia '/' primeira_precedencia {$$ = create_node(DIVISAO_BINARIA, '/'); add_child($$, $1); add_child($$, $3);} |
                        segunda_precedencia '*' primeira_precedencia {$$ = create_node(MULTIPLICACAO_BINARIA, '*'); add_child($$, $1); add_child($$, $3);} |
                        primeira_precedencia;

primeira_precedencia:   '(' expressao ')' {$$ = $2;} |
                        '!' primeira_precedencia {$$ = create_node(EXCLAMACAO_UNARIO, '!') ; add_child($$, $2);} |
                        '-' primeira_precedencia {$$ = create_node(MENOS_UNARIO, "-"); add_child($$, $2);} |
                        // fator {$$ = $1;};
                        fator

fator:  TK_IDENTIFICADOR '[' expressao  '^' lista_de_expressoes ']' |
        TK_IDENTIFICADOR '[' expressao ']' |
        literais |
        chamada_funcao |
        TK_IDENTIFICADOR {$$ = $1;};

tipo: TK_PR_FLOAT //{$$ = create_node_from_token(TIPO_FLOAT, $1);};|
      TK_PR_INT  |
      TK_PR_CHAR |
      TK_PR_BOOL;

literais:   TK_LIT_FLOAT {$$ = create_leaf(LIT_FLOAT, $1);}; |
            TK_LIT_INT   {$$ = create_leaf(LIT_INT, $1);};|
            TK_LIT_CHAR  {$$ = create_leaf(LIT_CHAR, $1);};|
            TK_LIT_TRUE  {$$ = create_leaf(LIT_TRUE, $1);};|
            TK_LIT_FALSE {$$ = create_leaf(LIT_FALSE, $1);};;
                                
//identificador: TK_IDENTIFICADOR {$$ = create_node_from_token(IDENTIFICADOR, $1);}; // create_leaf

//filho do if sem else, colocar como filho nulo
%%
void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}
