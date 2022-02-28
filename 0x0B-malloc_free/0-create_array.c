#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: first char in the array
 * Return: char ptr to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size < 1)
		return (NULL);
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
