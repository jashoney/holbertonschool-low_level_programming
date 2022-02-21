#include "main.h"

/**
 * _memcpy - copies n bytes of the memory from src to dest
 * @dest: destination for copying
 * @src: source for copying
 * @n: the number of bytes to be copied
 * Return: a ptr to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
