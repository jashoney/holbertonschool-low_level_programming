#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a string in reverse
 * str: is a pointer to an string of characters
 * Return: void
 */
void puts2(char *str)
{
	char stringchar;
	int stringlength = 1, i; 

	stringchar = *str;
	while (stringchar != 0)
	{
		stringchar = *(str + stringlength);
		stringlength++;
	}
	i = 0;
	while (i < stringlength)
	{
		if (i % 2 == 0)
		{
			stringchar = *(str + i);
			_putchar(stringchar);
		}
		i++;
	}
	_putchar('\n');
}
