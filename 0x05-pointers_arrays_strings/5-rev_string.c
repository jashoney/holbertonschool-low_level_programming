#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: is a pointer to an string of characters
 * Return: void
 */
void rev_string(char *s)
{
	char stringchar;
	int stringlength = 1, i;
	char newstring[1001];

	stringchar = *s;
	while (stringchar != 0)
	{
		stringlength++;
		stringchar = *(s + stringlength - 1);
	}
	i = 0;
	while (i < stringlength)
	{
		newstring[i] = *(s + (stringlength - 2) - i);
		i++;
	}
	newstring[stringlength - 1] = 0;
	i = 0;
	while (i < stringlength)
	{
		*(s + i) = newstring[i];
		i++;
	}
}
