#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

#include "symbol.h"

symbol* create_symbol(int line, token_type t, literal_type literal)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->line = line;
    s->token_t = t;
    s->lv.lt = literal;

    return s;
}

symbol* create_symbol_value_int_bool(int line, token_type t, literal_type literal, bool n)
{ 
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->token_t = t;
    s->lv.lt = literal;
    s->lv.v.b = n;

    return s;
}

symbol* create_symbol_value_char(int line, token_type t, literal_type literal, char n)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->token_t = t;
    s->lv.lt = literal;
    s->lv.v.c = n;

    return s;
}

symbol* create_symbol_value_string(int line, token_type t, literal_type literal, char* n)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->token_t = t;
    s->lv.lt = literal;
    s->lv.v.s = n;

    return s;
}

symbol* create_symbol_value_float(int line, token_type t, literal_type literal, float n)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->token_t = t;
    s->lv.lt = literal;
    s->lv.v.f = n;

    return s;
}