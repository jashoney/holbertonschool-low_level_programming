#include "main.h"

/**
 * puts_half - prints a string in reverse
 * @str: is a pointer to an string of characters
 * Return: void
 */
void puts_half(char *str)
{
	char stringchar;
	int stringlength = 0, i, n;

	stringchar = *str;
	while (stringchar != 0)
	{
		stringlength++;
		stringchar = *(str + stringlength);
	}
	i = 0;
	n = (stringlength - 1) / 2;
	while (i < stringlength)
	{
		if (i >= n)
		{
			stringchar = *(str + i);
			_putchar(stringchar);
		}
		i++;
	}
	_putchar('\n');
}
