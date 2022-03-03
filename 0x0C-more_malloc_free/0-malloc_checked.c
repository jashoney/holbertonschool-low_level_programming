#include "main.h"
#include <stdlib.h>

/*
 * malloc_checked - allocates memory
 * @b: bytes to allocate
 * Return: a ptr to the allocated memory, 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
