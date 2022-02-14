#include "main.h"

/**
 * _puts - prints a string
 * @str: is a pointer to an string of characters
 * Return: void
 */
void _puts(char *str)
{
	char stringchar;
	int stringlength = 0;

	stringchar = *str;
	while (stringchar != 0)
	{
		_putchar(stringchar);
		stringlength++;
		stringchar = *(str + stringlength);
	}
	_putchar('\n');
}

