/********************************************************************** 
 * INF01147 - Compiladores - Turma B (2022/1)                         *
 *                                                                    *
 *                                                                    *
 * André Carini                                                       *
 * Matheus Kovaleski                                                  *
 **********************************************************************/

%{
#include "tree.h"
#include "hash.h"
#include "stack.h"
#include "semantic_check.h"
#include "iloc.h"
#include "code.h"

extern int current_line_number;
extern tree *arvore;
extern stack *pilha;
stack* scope = NULL;

int yylex(void);
void yyerror (char const *s);
%}

%union {
    struct tree* ast;
    struct symbol* lexical_value;
}
%type <type> type

%type <arg> typed_argument
%type <arg> typed_argument_list

%type <ast> program
%type <ast> declaration
%type <ast> global_var
%type <ast> global_var_decl
%type <ast> function_decl
%type <ast> block
%type <ast> inside_block
%type <ast> command
%type <ast> command_without_comma
%type <ast> command_list
%type <ast> argument_list
%type <ast> expression_list
%type <ast> input
%type <ast> output
%type <ast> function_call
%type <ast> local_var
%type <ast> local_var_decl
%type <ast> id
%type <ast> array
%type <ast> literal
%type <ast> value
%type <ast> assignment
%type <ast> shift
%type <ast> return_stmt
%type <ast> break_stmt
%type <ast> continue_stmt
%type <ast> expression
%type <ast> if_stmt
%type <ast> while_loop
%type <ast> for_loop
%type <ast> indexer
%type <ast> int_indexer

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

//Literals
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

// Program Structure
program
  : %empty {$$ = NULL;}
  | init_scope declaration {arvore = $2; destroyStack(scope); print_code(arvore);}
  ;

declaration
  : global_var_decl {$$ = NULL;}
  | function_decl {$$ = $1;}
  | declaration global_var_decl {$$ = $1;}
  | declaration function_decl {$$ = chain_ast($1, $2);}
  ;

// Block and Command
init_scope
  : %empty {if (scope == NULL) {push(&scope, create_table(GLOBAL_SCOPE));}}
  ;

enter_scope
  : %empty {push(&scope, create_table(LOCAL_SCOPE));}
  ;

leave_scope
  : %empty {pop(&scope);}
  ;

block
  : '{' '}' {$$ = new_ast(0);}
  | '{' inside_block ';' '}' {$$ = new_ast(1, $2); $$->code = $2->code;}
  ;

inside_block
  : command {$$ = $1;}
  | inside_block ';' command {$$ = chain_ast($1, $3);}
  ;

command
  : local_var_decl {$$ = $1;}
  | assignment {$$ = $1;}
  | shift {$$ = $1;}
  | input {$$ = $1;}
  | output {$$ = $1;}
  | function_call {$$ = $1;}
  | if_stmt {$$ = $1;}
  | for_loop {$$ = $1;}
  | while_loop {$$ = $1;}
  | return_stmt {$$ = $1;}
  | break_stmt {$$ = $1;}
  | continue_stmt {$$ = $1;}
  | block {$$ = $1;}
  ;

command_without_comma
  : local_var_decl {$$ = $1;}
  | assignment {$$ = $1;}
  | shift {$$ = $1;}
  | input {$$ = $1;}
  | if_stmt {$$ = $1;}
  | for_loop {$$ = $1;}
  | while_loop {$$ = $1;}
  | return_stmt {$$ = $1;}
  | break_stmt {$$ = $1;}
  | continue_stmt {$$ = $1;}
  | block {$$ = $1;}
  ;

command_list
  : command_without_comma {$$ = $1;}
  | command_list ',' command_without_comma {$$ = chain_ast($1, $3);}
  ;

// I/O
input
  : TK_PR_INPUT expression {input_type_check(scope, $2); libera($2); $$ = NULL;}
  ;

output
  : TK_PR_OUTPUT expression_list {output_type_check($2); libera($2); $$ = NULL;}
  ;

// Assignment and Shift
assignment
  : id '=' expression {$$ = new_ast(2, $1, $3); type_infer(scope, $1, $3); declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_IDENTIFICADOR); $$->code = assignment(scope, $1, $3);}
  | array '=' expression {$$ = new_ast(2, $1, $3); type_infer(scope, $1, $3); declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_VETOR);}
  ;

shift
  : id TK_OC_SL expression {$$ = new_ast(2, $1, $3); type_check(scope, INT, $3); declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_IDENTIFICADOR);}
  | id TK_OC_SR expression  {$$ = new_ast(2, $1, $3); type_check(scope, INT, $3); declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_IDENTIFICADOR);}
  | array TK_OC_SL expression {$$ = new_ast(2, $1, $3); type_check(scope, INT, $3); declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_VETOR);}
  | array TK_OC_SR expression {$$ = new_ast(2, $1, $3); type_check(scope, INT, $3); declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_VETOR);}
  ;

// Control Flow and Loops
if_stmt
  : TK_PR_IF '(' expression ')' block {$$ = new_ast(2, $3, $5);create_if_else($$);}
  | TK_PR_IF '(' expression ')' block TK_PR_ELSE block {$$ = new_ast(3, $3, $5, $7); create_if_else($$);}
  ;

for_loop
  : TK_PR_FOR '(' command_list ':' expression ':' command_list ')' block {$$ = new_ast(4, $3, $5, $7, $9); type_check(scope, BOOL, $5);}
  ;

while_loop
  : TK_PR_WHILE '(' expression ')' TK_PR_DO block {$$ = new_ast(2, $3, $6); create_while($3,$6,$$);}
  ;

// Return, Break and Continue
return_stmt
  : TK_PR_RETURN expression {$$ = new_ast(1, $2);}
  ;

break_stmt
  : TK_PR_BREAK {$$ = new_ast(0);}
  ;

continue_stmt
  : TK_PR_CONTINUE {$$ = new_ast(0);}
  ;

// Global Variable Declaration
global_var_decl
  : global_var ';' {$$ = NULL;}
  | TK_PR_STATIC global_var ';' {$$ = NULL;}
  ;

global_var
  : type id {$$ = NULL; add_id(scope, $1, $2); libera($2);}
  | type id int_indexer {$$ = NULL; add_vector(scope, $1, $2, $3); libera($2); libera($3);}
  ;

int_indexer
  : '[' literal ']' {type_check(scope, INT, $2); $$ = $2;}
  | '[' literal ']' int_indexer {type_check(scope, INT, $2); chain_ast($2, $4);}
  ;

// Local Variable Declaration
local_var_decl
  : local_var {$$ = $1;}
  | TK_PR_STATIC local_var {$$ = $2;}
  | TK_PR_CONST local_var {$$ = $2;}
  | TK_PR_STATIC TK_PR_CONST local_var {$$ = $3;}
  ;

local_var
  : type id {$$ = NULL; add_id(scope, $1, $2); libera($2);}
  | type id TK_OC_LE id {$$ = new_ast(2, $2, $4); add_id(scope, $1, $2);}
  | type id TK_OC_LE literal {$$ = new_ast(2, $2, $4); add_id(scope, $1, $2);}
  ;

// Function Declaration
function_decl
  : type id '(' typed_argument_list ')' {add_function(scope, $1, $2, $4);} enter_scope block leave_scope {$$ = new_ast(1, $8->child); $8->child = NULL; declaration_check(scope, $2); usage_check(scope, $2, NATUREZA_FUNCAO); $$->code = $8->code; libera($2);}
  | TK_PR_STATIC type id '(' typed_argument_list ')' {add_function(scope, $2, $3, $5);} enter_scope block leave_scope {$$ = new_ast(1, $9->child); $9->child = NULL; declaration_check(scope, $3); usage_check(scope, $3, NATUREZA_FUNCAO); $$->code = $9->code; libera($3);}
  ;

typed_argument
  : %empty {$$ = NULL;}
  | type id {$$ = NULL; libera($2);}
  | TK_PR_CONST type id {$$ = NULL; libera($3);}
  ;

typed_argument_list
  : typed_argument {$$ = $1;}
  | typed_argument_list ',' typed_argument {$$ = NULL;}
  ;

// Function Call
function_call
  : id '(' argument_list ')' {declaration_check(scope, $1); usage_check(scope, $1, NATUREZA_FUNCAO); $$ = new_ast(1, $3); libera($1);}
  ;

argument_list
  : %empty {$$ = NULL;}
  | expression {$$ = $1;}
  | argument_list ',' expression {$$ = chain_ast($1, $3);}
  ;

// Expression
expression
  : value {$$ = $1;}
  | '(' expression ')' {$$ = $2;}
  | '+' expression {$$ = new_ast(1, $2); type_check(scope, NUMERIC, $2);}
  | '-' expression {$$ = new_ast(1, $2); type_check(scope, NUMERIC, $2);}
  | '!' expression {$$ = new_ast(1, $2); type_check(scope, BOOL, $2);}
  | '&' expression {$$ = new_ast(1, $2);}
  | '*' expression {$$ = new_ast(1, $2);}
  | '?' expression {$$ = new_ast(1, $2);}
  | '#' expression {$$ = new_ast(1, $2);}
  | expression '+' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3); arithmetic(OP_ADD, $1, $$, $3);}
  | expression '-' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3); arithmetic(OP_SUB, $1, $$, $3);}
  | expression '*' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3); arithmetic(OP_MULT, $1, $$, $3);}
  | expression '/' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3); arithmetic(OP_DIV, $1, $$, $3);}
  | expression '^' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);}
  | expression '%' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);}
  | expression '|' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);}
  | expression '&' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);}
  | expression '?' expression ':' expression {$$ = new_ast(3, $1, $3, $5); type_check(scope, BOOL, $1);}
  | expression '<' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=numeric_cmp_expression(OP_CMP_LT,$1->temp,$3->temp,$$,chain_code($1->code,$3->code));}
  | expression '>' expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=numeric_cmp_expression(OP_CMP_GT,$1->temp,$3->temp,$$,chain_code($1->code,$3->code));}
  | expression TK_OC_LE expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=numeric_cmp_expression(OP_CMP_LE,$1->temp,$3->temp,$$,chain_code($1->code,$3->code));}
  | expression TK_OC_GE expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=numeric_cmp_expression(OP_CMP_GE,$1->temp,$3->temp,$$,chain_code($1->code,$3->code));}
  | expression TK_OC_EQ expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=numeric_cmp_expression(OP_CMP_EQ,$1->temp,$3->temp,$$,chain_code($1->code,$3->code));}
  | expression TK_OC_NE expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=numeric_cmp_expression(OP_CMP_NE,$1->temp,$3->temp,$$,chain_code($1->code,$3->code));}
  | expression TK_OC_AND expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=oc_and_expression($1,$3,$$);}
  | expression TK_OC_OR expression {$$ = new_ast(2, $1, $3); $$->type = type_infer(scope, $1, $3);$$->temp=new_register();$$->code=oc_or_expression($1,$3,$$);}
  ;

expression_list
  : expression {$$ = $1;}
  | expression_list ',' expression {$$ = chain_ast($1, $3);}
  ;

// Definitions
id
  : TK_IDENTIFICADOR {$$ = new_valued_ast(STRING, $1);}
  ;

array
  : id indexer {$$ = new_ast(2, $1, $2); type_check(scope, INT, $2);}
  ;

indexer
  : '[' expression ']' {type_check(scope, INT, $2); $$ = $2;}
  | '[' expression ']' indexer {type_check(scope, INT, $2); chain_ast($2, $4);}
  ;

value
  : literal {$$ = $1; $$->code = new_code(load_imm(scope, $$));}
  | id {$$ = $1; $$->code = new_code(load_id(scope, $$));}
  | array {$$ = $1; $$->code = new_code(load_array(scope, $$));}
  | function_call {$$ = $1;}
  ;

type
  : TK_PR_INT {$$ = INT;}
  | TK_PR_FLOAT {$$ = FLOAT;}
  | TK_PR_BOOL {$$ = BOOL;}
  | TK_PR_CHAR {$$ = CHAR;}
  | TK_PR_STRING {$$ = STRING;}
  ;

literal
  : TK_LIT_INT {$$ = new_valued_ast(INT, $1);}
  | TK_LIT_FLOAT {$$ = new_valued_ast(FLOAT, $1);}
  | TK_LIT_FALSE {$$ = new_valued_ast(BOOL, $1);}
  | TK_LIT_TRUE {$$ = new_valued_ast(BOOL, $1);}
  | TK_LIT_CHAR {$$ = new_valued_ast(CHAR, $1);}
  | TK_LIT_STRING {$$ = new_valued_ast(STRING, $1);}
  ;
%%

    void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}