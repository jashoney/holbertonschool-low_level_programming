#include "main.h"

/**
 * _strcpy- copy a string
 * @src: is a pointer to an string of characters
 * @dest: where that string is copied to
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char strchar;
	int count = 0, stringlength = 0;

	strchar = *src;
	if (strchar != 0)
	{
		while (strchar != 0)
		{
			stringlength++;
			strchar = *(src + stringlength);
		}
		while (count <= stringlength + 1)
		{
			*(dest + count) = *(src + count);
			count++;
		}
	}
	return (dest);
}

