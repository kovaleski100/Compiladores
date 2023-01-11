#include "backpatch.h"

PATCH* new_patch(char* label) {
    PATCH* new = (PATCH*) malloc(sizeof(PATCH));
    new->label = label;
    new->next = NULL;

    return new;
}

void concat(PATCH** list1, PATCH* list2) {
    PATCH* current;

    if (*list1 == NULL)
        (*list1) = list2;
    else {
        current = *list1;

        while (current->next != NULL)
            current = current->next;

        current->next = list2;
    }
}

void backpatch(PATCH* list, char* label) {
    if (list == NULL)
        return;

    PATCH* current = list;

    while (current != NULL) {
        strcpy(current->label, label);
        current = current->next;
    }
}
