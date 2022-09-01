#include "search_algos.h"

/**
 * linear_search - searches for value in given array via linear algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if error occurs, given value otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
