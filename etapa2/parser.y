%{
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
// lista_de_elementos: lista_de_elementos funcao;
// lista_de_elementos: lista_de_elementos declaracao;
// lista_de_elementos: funcao;
lista_de_elementos: declaracao;

declaracao: tipo lista_identificador;

lista_identificador:    TK_IDENTIFICADOR array "," lista_identificador ';' |
                        TK_IDENTIFICADOR array | ;



array:      '[' TK_LIT_INT ']'|
            '[' lista_de_literais_inteiros ']' | ;

lista_de_literais_inteiros :   TK_LIT_INT '^' lista_de_literais_inteiros | ;


tipo: TK_PR_FLOAT|
      TK_PR_INT  |
      TK_PR_CHAR |
      TK_PR_BOOL;
      
%%