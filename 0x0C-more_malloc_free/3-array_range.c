#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start of the range values to be inserted
 * @max: max range of the values to be inserted
 * Return: a ptr to the alloacted array
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = malloc(range * sizeof(p[0]));
	if (p == NULL)
		return (NULL);
	while (i < range)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
