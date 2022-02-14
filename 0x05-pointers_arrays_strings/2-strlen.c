#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is a pointer to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int stringlength = 0;
	char stringchar;

	stringchar = *s;
	while (stringchar != 0)
	{
		stringlength++;
		stringchar = *(s + stringlength);
	}
	return (stringlength);
}

