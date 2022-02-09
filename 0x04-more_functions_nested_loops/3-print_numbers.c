#include "main.h"

/**
 * print_numbers - print the numbers for 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
