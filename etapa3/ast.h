

struct Literal
{
    int d;
    float f;
    char* s;
    bool b;
};

struct valor_lexico
{
    int numero_linha;
    char* valor_token;
    union Literal literal;
    /* data */
};

struct ast
{
    valor_lexico valor_lexico;
    int tipo_token;
    struct ast *filho;
    /* data */
};

ast* create_node(int tipo, valor_lexico valor);
ast* create_leaf(int tipo, valor_lexico valor);
ast* add_child(ast arvore, ast nodo);
print_arvore(ast arvore);