#include "main.h"

/**
 * _strncat - joins 2 strings, but only n chars from string 2
 * @dest: ptr to the 1st string, then the joined string
 * @src: ptr to the second string
 * @n: the max number of chars to use from string 2
 * Return: a pointer to the joined string
 */
char *_strncat(char *dest, char *src, int n)
{
	int loop1 = 0, loop2 = 0;

/*
 *	find the null byte in dest string
 *	then add the src string from there overwriting that null byte
 *	the overwriting will not be more than n bytes
 *	add a new null byte at the end of the dest string
 */
	while (dest[loop1] != '\0')
		loop1++;
	while (src[loop2] != '\0' && loop2 < n)
	{
		dest[loop1 + loop2] = src[loop2];
		loop2++;
	}
	dest[loop1 + loop2 + 1] = '\0';
	return (dest);
}
