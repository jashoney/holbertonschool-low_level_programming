#include "main.h"

/**
 * _strcat - joins 2 strings
 * @dest: ptr to the 1st string, then the joined string
 * @src: ptr to the second string
 * Return: a pointer to the joined string
 */
char *_strcat(char *dest, char *src)
{
	int loop1 = 0, loop2 = 0;

/*
 *	find the null byte in dest string
 *	then add the src string from there overwriting that null byte
 *	add a new null byte at the end of the dest string
 */
	while (dest[loop1] != '\0')
		loop1++;
	while (src[loop2] != '\0')
	{
		dest[loop1 + loop2] = src[loop2];
		loop2++;
	}
	dest[loop1 + loop2 + 1] = '\0';
	return (dest);
}
