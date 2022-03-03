#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: a ptr to the mem block
 * @old_size: the old size in bytes
 * @new_size: the new_size in bytes
 * Return: a void* to the new mem block or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *write, *copy;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (p);
	write = p;
	copy = ptr;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			write[i] = copy[i];
			i++;
		}
	}
	else
	{
		while (i < new_size)
		{
			write[i] = copy[i];
			i++;
		}
	}
	free(ptr);
	return (p);
}
