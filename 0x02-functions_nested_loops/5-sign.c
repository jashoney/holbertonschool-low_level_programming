#include "main.h"

/**
 * print_sign - returns 1 if n is positive, 0 if zero, or -1 if negative
 * n: the number of input
 * Return: as above
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
