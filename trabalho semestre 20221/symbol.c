#/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

#include "symbol.h"

symbol* create_symbol_value(int line, token_type t, literal_type literal)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->line = line;
    s->type = t;
    s->lv.lt = literal;

    return s;
}

symbol* create_symbol_value_int(int line, token_type t, literal_type literal, int n)
{ 
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->type = t;
    s->lv.lt = literal;
    s->lv.v.d = n;

    return s;
}

symbol* create_symbol_value_bool(int line, token_type t, literal_type literal, bool n)
{ 
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->type = t;
    s->lv.lt = literal;
    s->lv.v.b = n;

    return s;
}

symbol* create_symbol_value_char(int line, token_type t, literal_type literal, char n)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->type = t;
    s->lv.lt = literal;
    s->lv.v.c = n;

    return s;
}

symbol* create_symbol_value_string(int line, token_type t, literal_type literal, char* n)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->type = t;
    s->lv.lt = literal;
    s->lv.v.s = n;

    return s;
}

symbol* create_symbol_value_float(int line, token_type t, literal_type literal, float n)
{
    symbol *s = (symbol *) malloc(sizeof(symbol));
    s->type = t;
    s->lv.lt = literal;
    s->lv.v.f = n;

    return s;
}

void set_symbol_type(symbol *s, literal_type t)
{
     s->type = t;
}

void set_symbol_size(symbol *s, int size_mult)
{
    switch(s->type)
    {
        case TYPE_UNKNOWN:
            break;
        case TYPE_UINT:
            s->size = 32 * size_mult;
            break;
        case TYPE_INT:
            s->size = 32 * size_mult;
            break;
        case TYPE_BOOL:
            s->size = 8 * size_mult;
            break;
        case TYPE_FLOAT:
            s->size = 64 * size_mult;
            break;
        case TYPE_CHAR:
            s->size = 8 * size_mult;
            break;
        case TYPE_STRING:
            s->size = 1 * size_mult;
            break;
    }
}