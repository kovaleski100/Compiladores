#ifndef _UTILS_
#define _UTILS_

#include <memory.h>
#include <stdlib.h>

/* Macros strongly inspired on the book Crafting interpreters
 * link: https://craftinginterpreters.com/ */


// Free contigous memory by oldCount
#define FREE_ARRAY(type, pointer, oldCount) reallocate(pointer, sizeof(type) * (oldCount), 0)

//Doubles array size, if less than 8 makes it 8
#define GROW_LIMIT(limit) ((limit) < 8 ? 8 : (limit) * 2)

// Reallocate memory of contigous memory 
#define GROW_ARRAY(type, pointer, oldCount, newCount) (type*)reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

void* reallocate(void* pointer, size_t oldSize, size_t newSize);


#endif