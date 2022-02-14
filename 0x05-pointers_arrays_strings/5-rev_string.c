#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 * s: is a pointer to an string of characters
 * Return: void
 */
void rev_string(char *s)
{
	char stringchar;
	int stringlength = 1, i; 
	char newstring[101];

	stringchar = *s;
	while (stringchar != 0)
	{
		stringlength++;
		stringchar = *(s + stringlength - 1);
	}
	printf("stringlength is: %d\n", stringlength);
	i = 0;
	while (i < stringlength)
	{
		newstring[i] = *(s + (stringlength - 2) - i);
		printf("newstring[%d] = %c\n", i, newstring[i]);
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
