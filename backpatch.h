#ifndef BACKPATCH_H
#define BACKPATCH_H

#include <stdlib.h>
#include <string.h>

typedef struct PATCH {
    char* label;
    struct PATCH* next;
} PATCH;

PATCH* new_patch(char* label);
void concat(PATCH** list1, PATCH* list2);
void backpatch(PATCH* list, char* label);

#endif
