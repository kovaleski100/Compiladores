/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/
#include "utils.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize)
{
    if(newSize == 0)
    {
        free(pointer);
        return NULL;
    }
    else
    {
        void* result = realloc(pointer, newSize);
        return result;
    }
}