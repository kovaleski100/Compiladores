#include "semantic_check.h"

AST* id_from_ast(AST* ast) {
    if (ast->child != NULL)
        return ast->child;
    else
        return ast;
}

int type_compare(int expected, int given) {
    if (given == STRING) {
        printf("ERR_STRING_TO_X: cannot convert %d to %d.\n", given, expected);
        exit(ERR_STRING_TO_X);
    }

    if (given == CHAR) {
        printf("ERR_CHAR_TO_X: cannot convert %d to %d.\n", given, expected);
        exit(ERR_CHAR_TO_X);
    }

    if (given == expected || expected == NUMERIC)
        return expected;

    if (expected == INT && given == INT) return INT;
    if (expected == FLOAT && given == FLOAT) return FLOAT;
    if (expected == BOOL && given == BOOL) return BOOL;

    if (expected == FLOAT && given == INT) return FLOAT;
    if (expected == INT && given == FLOAT) return FLOAT;

    if (expected == BOOL && given == INT) return INT;
    if (expected == INT && given == BOOL) return INT;

    if (expected == BOOL && given == FLOAT) return FLOAT;
    if (expected == FLOAT && given == BOOL) return FLOAT;

    printf("ERR_WRONG_TYPE: expected %d but argument is of type %d.\n", expected, given);
    exit(ERR_WRONG_TYPE);
}

int type_check(STACK* scope, int expected, AST* ast) {
    AST* id = id_from_ast(ast);;
    int type = id->type;
    SYMBOL* symbol;

    if (type == STRING) {
        symbol = symbol_search(scope, hash_string(id->value->value.strval));

        if (symbol != NULL)
            type = symbol->type;
    }

    return type_compare(expected, type);
}

int type_infer(STACK* scope, AST* op1, AST* op2) {
    AST* id;
    int type1, type2;
    SYMBOL* symbol;

    id = id_from_ast(op1);
    type1 = id->type;

    if (type1 == STRING) {
        symbol = symbol_search(scope, hash_string(id->value->value.strval));

        if (symbol != NULL)
            type1 = symbol->type;
    }

    id = id_from_ast(op2);
    type2 = id->type;

    if (type2 == STRING) {
        symbol = symbol_search(scope, hash_string(id->value->value.strval));

        if (symbol != NULL)
            type2 = symbol->type;
    }

    return type_compare(type1, type2);
}

void input_type_check(STACK* scope, AST* ast) {
    if (ast->type != STRING || get_symbol(top(scope), hash_string(ast->value->value.strval)) == NULL) {
        printf("ERR_WRONG_PAR_INPUT: parameter must be an identifier.\n");
        exit(ERR_WRONG_PAR_INPUT);
    }
}

void output_error(AST* ast) {
    printf("ERR_WRONG_PAR_OUTPUT: all parameters must be either a string or an expression.\n");
    exit(ERR_WRONG_PAR_OUTPUT);
}

void output_type_check(AST* ast) {
    if (ast->type == CHAR)
        output_error(ast);

    AST* current_parameter = ast->child;

    while (current_parameter != NULL) {
        if (current_parameter->type == CHAR)
            output_error(ast);

        current_parameter = ast->sibling;
    }
}

void declaration_check(STACK* scope, AST* ast) {
    AST* id = id_from_ast(ast);

    if (symbol_search(scope, hash_string(id->value->value.strval)) == NULL) {
        printf("ERR_UNDECLARED: '%s' was not declared.\n", id->value->value.strval);
        exit(ERR_UNDECLARED);
    }
}

void usage_check(STACK* scope, AST* ast, int nature) {
    AST* id = id_from_ast(ast);
    SYMBOL* symbol = symbol_search(scope, hash_string(id->value->value.strval));

    switch (symbol->nature) {
        case NATUREZA_IDENTIFICADOR:
            if (nature != NATUREZA_IDENTIFICADOR) {
                printf("ERR_VARIABLE: '%s' is a variable.\n", id->value->value.strval);
                exit(ERR_VARIABLE);
            }; break;

        case NATUREZA_FUNCAO:
            if (nature != NATUREZA_FUNCAO) {
                printf("ERR_FUNCTION: '%s' is a function.\n", id->value->value.strval);
                exit(ERR_FUNCTION);
            }; break;

        case NATUREZA_VETOR:
            if (nature != NATUREZA_VETOR) {
                printf("ERR_VECTOR: '%s' is a vector.\n", id->value->value.strval);
                exit(ERR_VECTOR);
            }; break;
    }
}
