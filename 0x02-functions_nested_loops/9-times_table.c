#include "main.h"

/**
 * times_table - check the code
 *
 * Return: void
 */
void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			if (n2 == 0)
				_putchar('0');
			else if ((n1 * n2) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((n1 * n2) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(((n1 * n2) / 10) + '0');
				_putchar(((n1 * n2) % 10) + '0');
			}
			if (n2 < 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
