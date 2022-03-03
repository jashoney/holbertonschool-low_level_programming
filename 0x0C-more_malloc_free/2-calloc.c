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
	unsigned int i = 0;
	char *pchar;
	int *pint;
	long *plong;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	if (size == 1)
	{
		pchar = p;
		while (i < nmemb)
		{
			pchar[i] = 0;
			i++;
		}
	}
	if (size == 4)
	{
		pint = p;
		while (i < nmemb)
		{
			pint[i] = 0;
			i++;
		}
	}
	if (size == 8)
	{
		plong = p;
		while (i < nmemb)
		{
			plong[i] = 0;
			i++;
		}
	}
	return (p);
}
