#include "main.h"

/**
 *print_to_98 - prints all the natural numbers to 98 from (or to) n
 * @n: the starting point
 *
 * Return: sdgf
 */
void print_to_98(int n)
{
	int negative = 1;
	int moveupordown = 1;

	while (n != 98)
	{
		if (n > 98)
			moveupordown = -1;
		if (n < 0)
		{
			negative = -1;
			_putchar('-');
		}
		else
			negative = 1;
		if ((n < -99) || (n > 99))
		{
			_putchar((n / 100) * negative + '0');
			_putchar(((n / 10) % 10) * negative + '0');
			_putchar((n - (n / 10) * 10) * negative + '0');
		}
		else if ((n > -10) && (n < 10))
			_putchar((n % 10) * negative + '0');
		else
		{
			_putchar((n / 10) * negative + '0');
			_putchar((n % 10) * negative + '0');
		}
		_putchar(',');
		_putchar(' ');
		n = n + moveupordown;
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
