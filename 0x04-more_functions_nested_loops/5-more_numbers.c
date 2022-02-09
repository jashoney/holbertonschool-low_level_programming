#include "main.h"

/**
 * more_numbers - print the numbers for 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int count = 1;
	int number;

	while (count <= 10)
	{
		number = 0;
		while (number <= 14)
		{
			if (number >= 10)
				_putchar(number / 10 + '0');
			_putchar(number % 10 + '0');
			number++;
		}
		_putchar('\n');
		count++;
	}
}
