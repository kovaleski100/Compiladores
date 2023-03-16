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
#include "erro.h"
#define VAR 0
#define ARRAY 1
#define FUNCTION 2
extern int current_line_number;
extern void *arvore;
PILHA *pilha = NULL;
int yylex(void);
void yyerror (char const *s);
int yydebug=1;
int tipoVar = 0;
int tipoExpressao = 0;
%}

%union{
 struct ast *no;
 struct valor_lexico *valor_lexico; // etapa3 - 2.1 
 int tipo;
}

%type<no> inicio_de_tudo
%type<no> lista_variaveis
%type<no> variavel
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
//%type<no> inicializacao_variavel_local
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
//%type<no> expressao_aux
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
%type<no> inicia_escopo
%type<no> fim_escopo

%type<no> ID
%type<no> ID_FATOR_EXP
%type<no> litInt
%type<no> ID_ATR
%type<no> ID_ATR_ARRAY

%token <tipo>  TK_PR_INT
%token <tipo>  TK_PR_FLOAT
%token <tipo>  TK_PR_BOOL
%token <tipo>  TK_PR_CHAR
// %type <no> escopo_controle_fluxo_if
// %type <no> escopo_controle_fluxo_while
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
%token <valor_lexico> '('
%token <valor_lexico> ')'
%token <valor_lexico> ';'
%token <valor_lexico> ','
%start inicio
%%

inicio_de_tudo: {push(&pilha, cria_tabela_vazia());};
inicio: inicio_de_tudo programa {arvore = $2;};

programa: lista_de_elementos programa {$$ = $1; $$ = add_child($$, $2);} | {$$ = NULL;}; //REVISAR


lista_de_elementos:     declaracao {$$ = $1;}|
                        funcao {$$ = $1;}; // Destroi ultima tabela da pilha que não o escopo global


declaracao: tipo lista_identificador {$$ = $2;};

lista_identificador:    TK_IDENTIFICADOR array ',' lista_identificador {$$=NULL; destroiVL($3);
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);  
                        if(tipoVar == TK_PR_CHAR){
                            print_char_vector($1);
                            exit(ERR_CHAR_VECTOR);
                        }                                 
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo($1, ARRAY);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, $1);
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 

                                                
                        }|
                        TK_IDENTIFICADOR array ';' {$$ = NULL; destroiVL($3);
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);     
                        if(tipoVar == TK_PR_CHAR){
                            print_char_vector($1);
                            exit(ERR_CHAR_VECTOR);
                        }                                     
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo($1, ARRAY);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, $1);
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 
                        }|
                        TK_IDENTIFICADOR ';' {$$ = NULL; destroiVL($2);
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);
                        if(tipoVar == TK_PR_CHAR){
                            print_char_vector($1);
                            exit(ERR_CHAR_VECTOR);
                        }                                        
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo($1, VAR);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, $1);
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 
                        };

array:      '[' litInt ']' {$$ = NULL;destroiVL($1);destroiVL($3);}|
            '[' litInt '^' lista_de_literais_inteiros ']'  {$$ = NULL;destroiVL($1);destroiVL($3);destroiVL($5);};

lista_de_literais_inteiros :    litInt '^' lista_de_literais_inteiros {$$=NULL;destroiVL($2);}|
                                TK_LIT_INT {$$ = NULL;};

funcao: cabecalho corpo {$$ = add_child($1, $2);};

corpo: bloco_de_comandos {$$ = $1;};

cabecalho:  tipo  TK_IDENTIFICADOR '(' ')' {$$ = create_node(identificador, $2); destroiVL($3);destroiVL($4);
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $2, false);                                    
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo($2, FUNCTION);
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                            }
                                            else{
                                                print_declared(conteudo_na_pilha, $2);
                                                //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                           
                                            }|
            tipo TK_IDENTIFICADOR '(' lista_funcao ')' {$$ = create_node(identificador, $2); destroiVL($3);destroiVL($5);
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $2, false);                                  
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo($2, FUNCTION);
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                            }
                                            else{
                                                print_declared(conteudo_na_pilha, $2);
                                                //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                               
                                            };


lista_funcao:   parametro_funcao ',' lista_funcao {destroiVL($2);}| // REVISAR CORRIGIR MEMORIA ETAPA 3
                parametro_funcao {$$ = $1;};

parametro_funcao: tipo ID {$$ = $2;}; // ADICIONA NA TABELA DE SIMBOLOS ATUAL


inicia_escopo: '{' {push(&pilha, cria_tabela_vazia());destroiVL($1);};

fim_escopo: '}' {pop(&pilha);destroiVL($1);};

bloco_de_comandos: inicia_escopo comandos fim_escopo  { $$ = $2;}| 
                   inicia_escopo fim_escopo {$$=NULL;}; // REVISAR PRINT


comandos:   comandos_simples ';' comandos {$$ = ($1) == NULL ? ($3) : add_child($1, $3);destroiVL($2); tipoExpressao = 0;}|  // REVISAR
            comandos_simples ';' {$$ = $1; destroiVL($2); tipoExpressao = 0;};



comandos_simples:   declaracao_variavel_local {$$ = $1; tipoExpressao = 0;}| 
                    atribuicao {$$ = $1; tipoExpressao = 0;}|
                    controle_de_fluxo {$$ = $1; tipoExpressao = 0;}|
                    chamada_funcao {$$ = $1; tipoExpressao = 0;}|
                    bloco_de_comandos {$$ = $1;tipoExpressao = 0;}|
                    retorno {$$ = $1;tipoExpressao = 0;};




declaracao_variavel_local: tipo lista_variaveis {$$ = $2;}

lista_variaveis: variavel ',' lista_variaveis  {$$ = $1; $$ = add_child($$, $3);destroiVL($2);}|
                 TK_IDENTIFICADOR ',' lista_variaveis {$$ = $3;
                                                    // Verifica se função já existe no escopo_global/local
                                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, true);                                  
                                                    if(conteudo_na_pilha == NULL){
                                                        //Criar_conteudo
                                                        CONTEUDO* novo_conteudo = cria_conteudo($1, VAR);
                                                        novo_conteudo->natureza = VAR;
                                                        novo_conteudo->tipo = tipoVar;
                                                        //Adiciona o nome da variavel na pilha local(mais do topo)
                                                        adiciona_simbolo(novo_conteudo, pilha);
                                                    }
                                                    else{
                                                        print_declared(conteudo_na_pilha, $1);
                                                        //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                        exit(ERR_DECLARED);
                                                    }  
                                                    }|
                 variavel {$$ = $1;}|
                 TK_IDENTIFICADOR {$$ = NULL;
                                    // Verifica se função já existe no escopo_global
                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, true);                                  
                                    if(conteudo_na_pilha == NULL){
                                        //Criar_conteudo
                                        CONTEUDO* novo_conteudo = cria_conteudo($1, VAR);
                                        novo_conteudo->natureza = VAR;
                                        novo_conteudo->tipo = tipoVar;
                                        //Adiciona o nome da variavel na pilha local(mais no topo)
                                        adiciona_simbolo(novo_conteudo, pilha);
                                    }
                                    else{
                                        print_declared(conteudo_na_pilha, $1);
                                        //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                        exit(ERR_DECLARED);
                                    }  
                 
                                }; 

variavel: ID TK_OC_LE literais {$$ = create_node(caracter_especial, $2); $$ = add_child($$,$1); $$ = add_child($$,$3);};





atribuicao: ID_ATR '=' expressao {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3); define_tipo_atribuicao(tipoVar, tipoExpressao, current_line_number); tipoExpressao = 0; tipoVar = 0;}|  // TESTAR
            arranjo_multi '=' expressao  {$$ = create_node(caracter_especial, $2); $$ = add_child($$, $1); $$ = add_child($$, $3);}

arranjo_multi:  ID_ATR_ARRAY '[' lista_de_expressoes ']' {$$ = create_node(arranjo, $2); $$ = add_child($$, $1); $$ = add_child($$, $3); destroiVL($4);}
                // ID '[' expressao_aux ']' {$$ = create_node(arranjo, $2); $$ = add_child($$, $1); $$ = add_child($$, $3); destroiVL($4);};


ID_ATR: TK_IDENTIFICADOR {
                        $$ = create_node(identificador, $1);
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);                                  
                        if(conteudo_na_pilha == NULL){
                            print_undeclared($1);
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        } else {
                            if(conteudo_na_pilha->natureza == ARRAY) {
                               print_array(conteudo_na_pilha, $1);
                               exit(ERR_ARRAY);
                            }
                            else if(conteudo_na_pilha->natureza == FUNCTION){
                                print_function(conteudo_na_pilha, $1);
                                exit(ERR_FUNCTION);
                            }
                            tipoVar = conteudo_na_pilha->tipo;
                        }
};

ID_ATR_ARRAY: TK_IDENTIFICADOR {
                        $$ = create_node(identificador, $1);
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);                                       
                        if(conteudo_na_pilha == NULL){
                            print_undeclared($1);
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        } else {
                            if(conteudo_na_pilha->natureza == VAR) {
                               print_variable(conteudo_na_pilha, $1);
                               exit(ERR_ARRAY);
                            }
                            else if(conteudo_na_pilha->natureza == FUNCTION){
                                print_function(conteudo_na_pilha, $1);
                                exit(ERR_FUNCTION);
                            }
                        }
};


lista_de_expressoes: lista_de_expressoes '^' expressao   {$$ = create_node(caracter_especial, $2); add_child($$,$1); add_child($$, $3);}|
                     expressao {$$ = $1;};





retorno:  TK_PR_RETURN expressao {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $2);};


// escopo_controle_fluxo_if: TK_PR_IF {
//     // // Verifica se função já existe no escopo_global
//     // printf("Inicio TK_IDENTIFICADOR\n");
//     // printf("Conteudo um\n");                                         
//     // push(&pilha, cria_tabela_vazia());
//     // printf("Criou tabela do if");
//     $$ = $1;
// };
// escopo_controle_fluxo_while: TK_PR_WHILE {
//     // Verifica se função já existe no escopo_global
//     // printf("Inicio TK_IDENTIFICADOR\n");
//     // printf("Conteudo um\n");                                         
//     // push(&pilha, cria_tabela_vazia());
//     // printf("Criou tabela do while");
//     // $$ = $1;
// };  


controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $3); $$ = add_child($$, $6); destroiVL($2); destroiVL($4);
                                                                            
                                                                            }|
                   TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $3); $$ = add_child($$, $6); $$ = add_child($$, $8);destroiVL($2); destroiVL($4);}|
                   TK_PR_WHILE '(' expressao ')' bloco_de_comandos {$$ = create_node(palavra_reservada, $1); $$ = add_child($$, $3); $$ = add_child($$, $5); destroiVL($2); destroiVL($4);}

// Tem que criar escopo para os ifs


chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')' {$$ = create_node(call,$1); $$ = add_child($$, $3); destroiVL($2); destroiVL($4);
                                                                // Verifica se função já existe no escopo_global
                                                                CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);                                     
                                                                if(conteudo_na_pilha == NULL){
                                                                    print_undeclared($1);
                                                                    //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                                    exit(ERR_UNDECLARED);
                                                                }
                                                                else {
                                                                    if(conteudo_na_pilha->natureza == VAR) {
                                                                        print_variable(conteudo_na_pilha, $1);
                                                                        exit(ERR_VARIABLE);
                                                                    }
                                                                    else if (conteudo_na_pilha->natureza == ARRAY){
                                                                        print_array(conteudo_na_pilha, $1);
                                                                        exit(ERR_ARRAY);
                                                                    }
                                                                }
                                                            }|
                TK_IDENTIFICADOR '('  ')' {$$ = create_node(call,$1); destroiVL($2); destroiVL($3);
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);                                       
                                            if(conteudo_na_pilha == NULL){
                                                print_undeclared($1);
                                                //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                exit(ERR_UNDECLARED);
                                            }
                                            else {
                                                if(conteudo_na_pilha->natureza == VAR) {
                                                    print_variable(conteudo_na_pilha, $1);
                                                    exit(ERR_VARIABLE);
                                                }
                                                else if (conteudo_na_pilha->natureza == ARRAY){
                                                    print_array(conteudo_na_pilha, $1);
                                                    exit(ERR_ARRAY);
                                                }
                                            }
                                         };




lista_de_argumentos: argumento {$$ = $1;}|
                     argumento ',' lista_de_argumentos {$$ = add_child($1, $3);destroiVL($2);}; // REVISAR CORRECAO ETAPA 3

argumento : expressao {$$ = $1;};






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

primeira_precedencia:   '(' expressao ')' {$$ = $2; destroiVL($1); destroiVL($3);}|
                        '!' primeira_precedencia {$$ = create_node(caracter_especial, $1) ; $$ = add_child($$, $2);}|
                        '-' primeira_precedencia {$$ = create_node(caracter_especial, $1); $$ = add_child($$, $2);} |
                        fator {$$ = $1;};

fator:  arranjo_multi {$$ = $1;} |
        literais {$$ = $1;} |
        chamada_funcao {$$ = $1;} |
        ID_FATOR_EXP {$$ = $1;};





tipo: TK_PR_FLOAT {$$ = NULL; tipoVar = TK_PR_FLOAT;} | //{$$ = create_node_from_token(TIPO_FLOAT, $1);};|
      TK_PR_INT  {$$ = NULL; tipoVar = TK_PR_INT;}  |
      TK_PR_CHAR {$$ = NULL; tipoVar = TK_PR_CHAR;} |
      TK_PR_BOOL {$$ = NULL; tipoVar = TK_PR_BOOL;};

literais:   TK_LIT_FLOAT  {$$ = create_node(literal_float, $1); tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_FLOAT, $1);}| // {$$ = create_leaf(LIT_FLOAT, $1);}; |
            TK_LIT_INT    {$$ = create_node(literal_inteiro, $1);  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_INT, $1);}| //{$$ = create_leaf(LIT_INT, $1);};|
            TK_LIT_CHAR   {$$ = create_node(literal_char, $1);  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_CHAR, $1);}| //{$$ = create_leaf(LIT_CHAR, $1);};|
            TK_LIT_TRUE   {$$ = create_node(literal_bool, $1);  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_BOOL, $1); }| //{$$ = create_leaf(LIT_TRUE, $1);};|
            TK_LIT_FALSE  {$$ = create_node(literal_bool, $1);  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_BOOL, $1);}; //{$$ = create_leaf(LIT_FALSE, $1);};;

litInt:  TK_LIT_INT  {$$ = create_node(literal_inteiro, $1);}


ID_FATOR_EXP: TK_IDENTIFICADOR {$$ = create_node(identificador, $1);
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, false);                                     
                        if(conteudo_na_pilha == NULL){
                            print_undeclared($1);
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        }
                        tipoExpressao = define_tipo_expressao(tipoExpressao, conteudo_na_pilha->tipo, $1);  
                        };   

ID: TK_IDENTIFICADOR {$$ = create_node(identificador, $1);
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, $1, true);                                        
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo($1, VAR);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, $1);
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        }  
                        };                          
%%





void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}