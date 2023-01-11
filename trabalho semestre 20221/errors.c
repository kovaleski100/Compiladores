/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/
#include "errors.h"

int check_atribuicao(stack *s, hash_element variable, symbol literal)
{
    return 0;
}

int check_declaration(stack *s, hash_element declared)
{
    if(!search(s, declared.val.lexema))
    {
        insert_symbol(s->table, declared);
        return 0;
    }
    else
    {
        return ERR_DECLARED;
    }
}