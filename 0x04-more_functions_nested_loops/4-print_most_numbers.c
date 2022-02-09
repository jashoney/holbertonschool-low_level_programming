#include "main.h"

/**
 * print_most_numbers - print the numbers for 0 to 9, except for 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if (number == 2 || number == 4)
			;
		else
			_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
