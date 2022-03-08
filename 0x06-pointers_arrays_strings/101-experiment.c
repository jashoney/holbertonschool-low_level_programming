#include "main.h"
/**
 * find_number_of_digits - does what it says
 * @number: the number to count digits of
 * Return: the number of digits
 */
int find_number_of_digits(unsigned int number)
{
	int digits = 0;

	while (number >= 10)
	{
		if (number >= 10)
			number = number / 10;
		digits++;
	}
	digits++;
	return (digits);
}

/**
 * print_number - prints an integer using _putchar
 * @n: is the integer
 * Return: is void
 */
void print_number(int n)
{
	int digits = 0; i = 0;
	char *number_string;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		digits = find_number_of_digits(n);
		number_string = malloc(digits + 1);
		if (number_string == NULL)
			return;
		else
		{
			while (i < digits)
			{
				number_string[digits - i - 1] = n % 10;
				n = n / 10;
				i++;
			}
			i = 0;
			while (i < digits)
				_putchar(number_string[i] + '0');
			}
		}
	else
		_putchar('0');
}
