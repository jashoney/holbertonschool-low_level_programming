#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: is a pointer to an string of characters
 * Return: void
 */
void print_rev(char *s)
{
	char stringchar;
	int stringlength = 0, reverse;

	stringchar = *s;
	while (stringchar != 0)
	{
		stringlength++;
		stringchar = *(s + stringlength);
	}
	reverse = stringlength - 1;
	while (reverse >= 0)
	{
		stringchar = *(s + reverse);
		_putchar(stringchar);
		reverse--;
	}
	_putchar('\n');
}

