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
	int count = 0, stringcount = 0;

	strchar = *src;
	if (strchar != 0)
	{
		stringcount = 1;
		while (strchar != 0)
		{
			strchar = *(src + stringcount);
			stringcount++;
		}
		while (count <= stringcount)
		{
			*(dest + count) = *(src + count);
			count++;
		}
	}
	return (dest);
}

