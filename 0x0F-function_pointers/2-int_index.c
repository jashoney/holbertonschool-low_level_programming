#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches an array for an integer
 * @array:  a ptr to an array of ints
 * @size: size of the array
 * @cmp: a ptr to a func that receives an int and returns an int
 * Return: is void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
