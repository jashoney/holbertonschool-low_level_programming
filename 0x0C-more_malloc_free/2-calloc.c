#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the width of the array
 * @size: size, in bytes, of nmemb elements
 * Return: a ptr to the allocated memory, 98 on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;

	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	p = ptr
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}

	return (ptr);
}
