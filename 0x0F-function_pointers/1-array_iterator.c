#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterating array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action; function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        action((array[i]));
    }

}