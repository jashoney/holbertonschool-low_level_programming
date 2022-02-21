#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: ptr to the memory area
 * @b: the filler
 * @n: the number of bytes to be filled
 * Return: a ptr to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
