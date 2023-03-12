#include "ILOC.h"

char *cria_registrador()
{
    static char rotulo_number = '0';

    char *rotulo_name;
    strcpy(rotulo_name,strcat("r", rotulo_number));
    rotulo_number++;
    return rotulo_name;
}

char* cria_label()
{
    static char label_number = '0';

    char *label_name;
    strcpy(label_name,strcat("l", label_number));
    label_number++;
    return label_name;
}

void gera_codigo_expr(ILOCLISTSTRUCT ** iloclist, int exprType)
{   ILOCSTRUCT *iloc = (ILOCSTRUCT*)malloc(sizeof(ILOCSTRUCT));

    switch (exprType)
    {
    case ADD:
        iloc->end1 = cria_registrador();
        iloc->end2 = cria_registrador();
        iloc->end3 = cria_registrador();
        strcpy(iloc->instrucao, "add");
        break;
    
    default:
        break;
    }
}