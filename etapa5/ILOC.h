#include <string.h>

enum iloctype
{
    ADD,
};

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

char* criar_rotulo();