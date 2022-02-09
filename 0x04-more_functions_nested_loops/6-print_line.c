#include "main.h"

/**
 * print_line- print a line of "_" chars, n lines long
 * @n: length of printed line
 * Return: void
 */
void print_line(int n)
{
	int length = 0;

	while (length <= n)
	{
		if (length > 0)
			_putchar(95);
		length++;
	}
	_putchar('\n');
}
