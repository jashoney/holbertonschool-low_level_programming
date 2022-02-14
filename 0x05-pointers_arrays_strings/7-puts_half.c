#include "main.h"

/**
 * puts_half - prints a string in reverse
 * @str: is a pointer to an string of characters
 * Return: void
 */
void puts_half(char *str)
{
	char stringchar;
	int stringlength = 0, n = 0, i = 1;

	stringchar = *str;
	if (stringchar != 0)
	{
		while (stringchar != 0)
		{
			stringlength++;
			stringchar = *(str + stringlength);
		}
		if (stringlength % 2 == 0)
			n = stringlength / 2;
		else
			n = (stringlength - 1) / 2;
		while (i <= stringlength)
		{
			if (i > (stringlength - n))
			{
				stringchar = *(str + i - 1);
				_putchar(stringchar);
			}
			i++;
		}
	}
	_putchar('\n');
}
