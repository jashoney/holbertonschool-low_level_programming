#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is a pointer to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int stringlength;

	if (*s == 0)
		stringlength = 0;
	while (*(s + stringlength) != 0)
		stringlength++;
	return (stringlength);
}

