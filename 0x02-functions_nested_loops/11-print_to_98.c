#include "main.h"

/**
 *print_to_98 - prints all the natural numbers to 98 from (or to) n
 * @n: the starting point
 *
 * Return: sdgf
 */
void print_to_98(int n)
{
	int negative;

	if (n > 98)
		while (n > 98)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n - (n / 10) * 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}
	else if (n < 98)
		while (n <= 97)
		{
			if (n < 0)
			{
				negative = -1;
				_putchar('-');
			}
			else
				negative = 1;
			if ((n < -9) || (n > 9))
				_putchar((n / 10) * negative + '0');
			_putchar((n % 10) * negative + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
