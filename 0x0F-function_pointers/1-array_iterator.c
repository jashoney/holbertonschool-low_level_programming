#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - iterates an array
 * @array: ptr to an array of ints
 * @size: the size of the 1 dimensional array
 * @action: ptr to the function that is to be used on the array
 * Return: is void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
