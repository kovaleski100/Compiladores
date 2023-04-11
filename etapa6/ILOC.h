#include <string.h>

typedef struct ILOC
{
    char* instrucao;
    char* rotulo1;
    char* rotulo2;
    char* end1;
    char* end2;
    char* end3;
    /* data */
}ILOCSTRUCT;

typedef struct ILOCLIST
{
    ILOCSTRUCT *instrucao;
    struct ILOCLIST *next;
    /* data */
}ILOCLISTSTRUCT;

char* cria_label();
char* cria_registrador();
void gera_codigo_expr(ILOCLISTSTRUCT ** iloclist, int exprType);

