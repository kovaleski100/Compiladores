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

extern int current_line_number;
extern tree *arvore;
extern stack *pilha;

int yylex(void);
void yyerror (char const *s);
%}

%start start

%union {
    struct tree* ast;
    struct symbol* valor_lexico;
}

%type<ast> start program declaration global_variable global_fotter
%type<ast> static id function func_header list parameters const command_block command
%type<ast> simple_command local_variable id_list literal attribution
%type<ast> operand_arit expr ternary unary_minus or and or_log and_log equal rel soma_sub mult_div
%type<ast> exponential unary parenthesis flux_control conditional iterative vector_attribution
%type<ast> input output return break continue shift func_call args type assignment

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
start:
     program {arvore = $1;}

program
    : declaration program {$$ = $1; $$ = insert_child($$, $2);}
    |                     {$$ = NULL;}
    ;

declaration
    : function             {$$ = $1;}
    | global_variable {$$ = NULL;}
    ;

global_variable
    : static type id '[' TK_LIT_INT[intVector] ']' global_fotter ';' {declareVar(pilha, $intVector->lv.v.ui, $2->data->type, VEC, $3->data->line, $3->data->lv.v, $3->data->lexema);}
    | static type id global_fotter ';'                               {declareVar(pilha, 1, $2->data->type, VAR, $3->data->line, $3->data->lv.v, $3->data->lexema);}
    ;

global_fotter
    : ',' id '[' TK_LIT_INT[intVector] ']' global_fotter {declareVar(pilha, $intVector->lv.v.ui, TYPE_UNKNOWN, VEC, $3->line, $3->lv.v, $3->lexema);}
    | ',' id global_fotter                               {declareVar(pilha, 1, TYPE_UNKNOWN, VAR, $3->data->line, $3->data->lv.v, $3->data->lexema);}
    |       {$$ = NULL;}
    ;

static
    : TK_PR_STATIC        {$$ = NULL;}
    |                     {$$ = NULL;}
    ;

id
    : TK_IDENTIFICADOR    {$$ = insert_leaf($1);}
    ;

function
    : func_header command_block {$$ = $1; $$ = insert_child($$, $2);}
    ;

func_header
    : static type id list       {$$ = $3; declareFunc(pilha,1, $2->data->type, FUN, $3->data->line, $3->data->lv.v, $3->data->lexema);}
    ;

list
    : '(' parameters ')'        {$$ = NULL;}
    | '(' ')'                   {$$ = NULL;}
    ;

parameters
    : parameters ',' const type id  {$$ = NULL; libera($5);}
    | const type id                 {$$ = NULL; libera($3);}
    ;

const
    : TK_PR_CONST                 {$$ = NULL;}
    |                             {$$ = NULL;}
    ;

command_block
    : openComand command closeComand     {$$ = $2;}
    ;

openComand
    : '{' {pushTable(&pilha);}
    ;

closeComand
    : '}' {pop(&pilha);}
    ;

command
    : simple_command ';' command  {$$ = $1; $$ = insert_child($$, $3);}
    | flux_control ';' command    {$$ = $1; $$ = insert_child($$, $3);}
    |                             {$$ = NULL;}
    ;

simple_command
    : local_variable  {$$ = $1;}
    | attribution     {$$ = $1;}
    | input           {$$ = $1;}
    | output          {$$ = $1;}
    | return          {$$ = $1;}
    | command_block   {$$ = $1;}
    | shift           {$$ = $1;}
    | break           {$$ = $1;}
    | continue        {$$ = $1;}
    | func_call       {$$ = $1;}
    ;

local_variable
    : static const type id_list {$$ = $4;}
    ;

id_list
    : assignment              {$$ = $1;}
    | id_list ',' assignment  {$$ = $1;  $$ = insert_child($$, $3);}
    | id_list ',' id          {$$ = $1; declareVar(top, 1, TYPE_UNKNOWN, VAR, $3->line, $3->lv.v, $3->lexema);libera($3);}
    | id                      {declareVar(top, 1, TYPE_UNKNOWN, VAR, $3->line, $3->lv.v, $3->lexema);libera($3);
    ;

assignment
    : id TK_OC_LE id         {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | id TK_OC_LE literal    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    ;


literal
    : TK_LIT_INT    {$$ = insert_leaf($1); }
    | TK_LIT_FLOAT  {$$ = insert_leaf($1); }
    | TK_LIT_FALSE  {$$ = insert_leaf($1); }
    | TK_LIT_TRUE   {$$ = insert_leaf($1); }
    | TK_LIT_CHAR   {$$ = insert_leaf($1); }
    | TK_LIT_STRING {$$ = insert_leaf($1); }
    ;

attribution
    : id '=' expr   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | vector_attribution '=' expr  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    ;

vector_attribution
    : id '[' expr ']' {$$ = insert_leaf($2); $$->data->lv.v.s = "[]"; $$->data->token_type = COMPOSE_OP; $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    ;


expr
    : ternary       {$$ = $1;}
    ;

ternary
        : unary_minus '?' unary_minus':' ternary {$$ = insert_leaf($2); $$->data->lv.v.s = "?:";
                                       $$->data->token_type = COMPOSE_OP;
                                       $$ = insert_child($$, $1); $$ = insert_child($$, $3);
                                       $$ = insert_child($$, $5);}
    | unary_minus                {$$ = $1;}
    ;

unary_minus
    : '+' unary_minus            {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '-' unary_minus            {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | or                         {$$ = $1;}
    ;

or
    : or TK_OC_OR and            {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | and                        {$$ = $1;}
    ;

and
    : and TK_OC_AND or_log {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | or_log               {$$ = $1;}
    ;

or_log
    : or_log '|' and_log   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | and_log              {$$ =  $1;}
    ;

and_log
    : and_log '&' equal    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | equal                {$$ = $1;}
    ;

equal
    : equal TK_OC_EQ rel   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | equal TK_OC_NE rel   {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel                  {$$ = $1;}
    ;

rel
    : rel TK_OC_LE soma_sub {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel TK_OC_GE soma_sub {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel '>' soma_sub      {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | rel '<' soma_sub      {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | soma_sub              {$$ = $1;}
    ;

soma_sub
    : soma_sub '+' mult_div {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | soma_sub '-' mult_div {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | mult_div              {$$ = $1;}
    ;

mult_div
    : mult_div '*' unary    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | mult_div '/' unary    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | mult_div '%' unary    {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | exponential           {$$ = $1;}
    ;

exponential
    : exponential '^' unary {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, $3);}
    | unary                 {$$ = $1;}
    ;

unary
    : '*' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '&' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '#' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '?' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | '!' unary   {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | parenthesis {$$ = $1;}
    ;

parenthesis
    : '(' expr ')' {$$ = $2;}
    | operand_arit {$$ = $1;}
    ;

flux_control
    : conditional  {$$ = $1;}
    | iterative    {$$ = $1;}
    ;

conditional
    : TK_PR_IF '(' expr ')' command_block {$$ = insert_leaf($1); $$ = insert_child($$, $3); $$ = insert_child($$, $5);}

    | TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block {
        $$ = insert_leaf($1);
        $$ = insert_child($$, $3); $$ = insert_child($$, $5); $$ = insert_child($$, $7);}
    ;

iterative
    : TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block {
        $$ = insert_leaf($1);
        $$ = insert_child($$, $3); $$ = insert_child($$, $5); $$ = insert_child($$, $7);
        $$ = insert_child($$, $9);}
    | TK_PR_WHILE '(' expr ')' TK_PR_DO command_block {
        $$ = insert_leaf($1);
        $$ = insert_child($$, $3);
        $$ = insert_child($$, $6);}
    ;

input
    : TK_PR_INPUT id       {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    ;

output
    : TK_PR_OUTPUT id      {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    | TK_PR_OUTPUT literal {$$ = insert_leaf($1); $$ = insert_child ($$, $2);}
    ;

return
    : TK_PR_RETURN expr    {$$ = insert_leaf($1); $$ = insert_child($$, $2);}
    ;

break
    : TK_PR_BREAK          {$$ = insert_leaf($1);}
    ;

continue
    : TK_PR_CONTINUE       {$$ = insert_leaf($1);}
    ;

shift
    : id TK_OC_SL TK_LIT_INT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    | id TK_OC_SR TK_LIT_INT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    | vector_attribution TK_OC_SL TK_LIT_INT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    | vector_attribution TK_OC_SR TK_LIT_INT  {$$ = insert_leaf($2); $$ = insert_child($$, $1); $$ = insert_child($$, insert_leaf($3));}
    ;

func_call
    : id '(' args ')' {$$ = $1; $$->data->lv.v.s = prepend($$->data->lv.v.s, "call "); $$ = insert_child($$, $3);}
    ;

args
    : expr ',' args  {$$ = $1; $$ = insert_child($$, $3);}
    | expr           {$$ = $1;}
    |                {$$ = NULL;}
    ;

operand_arit
    : vector_attribution { $$ = $1;}
    | id                 { $$ = $1;}
    | TK_LIT_INT         { $$ = insert_leaf($1);}
    | TK_LIT_FLOAT       { $$ = insert_leaf($1);}
    | func_call          { $$ = $1;}
    ;

type
    : TK_PR_INT     {$$ = NULL;}
    | TK_PR_FLOAT   {$$ = NULL;}
    | TK_PR_BOOL    {$$ = NULL;}
    | TK_PR_CHAR    {$$ = NULL;}
    | TK_PR_STRING  {$$ = NULL;}
    ;
%%

    void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}