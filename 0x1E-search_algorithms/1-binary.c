#include "search_algos.h"

/**
 * binary_search - searches for given value in an array via binary algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: given value to search for
 * Return: -1 if array is NULL, given value otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int right = size - 1;
	int left = 0;
	int middle;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (middle = left; middle < right; middle++)
				printf("%d, ", array[middle]);
			printf("%d\n", array[middle]);
			middle = left + (right - left) / 2;
			if (array[middle] == value)
				return (middle);
			if (array[middle] < value)
				left = middle + 1;
			else
				right = middle - 1;
		}
	}
	return (-1);
}
