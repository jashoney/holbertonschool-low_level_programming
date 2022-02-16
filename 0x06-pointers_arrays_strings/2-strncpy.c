#include "main.h"

/**
 * _strncpy - joins 2 strings
 * @dest: ptr to the 1st string, then the joined string
 * @src: ptr to the second string
 * @n: number of chars to use from src
 * Return: a pointer to the joined string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
