/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

#include <stdbool.h>
#include <stdlib.h>

typedef enum literal_type
{
    TYPE_UNKNOWN,
    TYPE_UINT,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_BOOL,
    TYPE_STRING,
    TYPE_CHAR,
} literal_type;

typedef enum token_type
{
    SPECIAL_CHAR,
    COMPOSE_OP,
    ID,
    LITERAL,
}token_type;

typedef union value
{
    unsigned int ui;
    int d;           //int
    float f;         //float
    bool b;           //bool
    char* s;         //string
    char c;           //char
}value;

typedef struct literal_value
{
    literal_type lt;
    value v;
}literal_value;

typedef enum nature
{
    LIT,
    VAR,
    VEC,
    FUN,
} nature;

typedef struct symbol
{
    int line;
    nature nat;
    literal_type type;
    uint vec_size;
    int size;
    
    char* lexema;
    value lv;
} symbol;

symbol* create_symbol_value(int line, token_type t, literal_type literal);
symbol* create_symbol_value_int(int line, token_type t, literal_type literal, int n);
symbol* create_symbol_value_bool(int line, token_type t, literal_type literal, bool n);
symbol* create_symbol_value_char(int line, token_type t, literal_type literal, char n);
symbol* create_symbol_value_string(int line, token_type t, literal_type literal, char* n);
symbol* create_symbol_value_float(int line, token_type t, literal_type literal, float n);