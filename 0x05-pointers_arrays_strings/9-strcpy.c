#include "main.h"

/**
 * strlength - finds the length of a string
 * @src: is a pointer to an string of characters
 * Return: void
 */
int strlength(char *src)
{
	int length = 0;

	while (src[length] != 0)
		length++;
	return (length);
}

/**
 * _strcpy - copies a string at *src to *dest
 * @src: points to a string
 * @dest: where the string is to be copied to
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int stringlength, count;

	stringlength = strlength(src);
	count = 0;
	while (count <= stringlength)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
