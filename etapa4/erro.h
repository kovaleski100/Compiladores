#include "stack.h"

#define ERR_UNDECLARED 10 //2.2
#define ERR_DECLARED 11 //2.2
#define ERR_VARIABLE 20 //2.3



#define ERR_ARRAY 21 //2.3
#define ERR_FUNCTION 22 //2.3
#define ERR_CHAR_TO_INT 31 //2.4
#define ERR_CHAR_TO_FLOAT 32 //2.4
#define ERR_CHAR_TO_BOOL 33 //2.4
#define ERR_CHAR_VECTOR 34 //2.4
#define ERR_X_TO_CHAR 35 //2.4

void print_undeclared(valor_lexico *erro);
void print_declared(CONTEUDO *conteudo, valor_lexico *vl);
// void print_identificar_erro(CONTEUDO *original, valor_lexico *erro, int natureza);
//void check_atribuicao(valor_lexico *v1, valor_lexico *v2, int line);