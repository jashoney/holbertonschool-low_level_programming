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
 * find_first - finds the first digit of a number
 * @number: the number in question
 * @digits: how many digits it has
 * Return: the first digit of number
 */
int find_first(unsigned int number, int digits)
{
	unsigned int testforazero = 1;
	int i = 1;

	while (i < digits)
	{
		testforazero = testforazero * 10;
		i++;
	}
	if (number < testforazero)
		number = 0;
	else
		while (number > 9)
		{
			number =  number / 10;
		}
	return (number);
}
/**
 * cut_number - divides an integer and returns the new number
 * @number: the initial number
 * @count: how many digits the number has
 * Return: the new number
 */

int cut_number(unsigned int number, int count)
{
	int modulus = 1;

	while (count > 1)
	{
		modulus = modulus * 10;
		count--;
	}
	number = (number % modulus);
	return (number);
}

/**
 * print_number - prints an integer using _putchar
 * @n: is the integer
 * Return: is void
 */
void print_number(int n)
{
	int digits = 0, current;
	unsigned int number;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		number = n;
		digits = find_number_of_digits(number);
		while (digits > 1)
		{
			current = find_first(number, digits);
			_putchar(current + '0');
			number = cut_number(number, digits);
			digits--;
		}
		n = number;
		_putchar(n + '0');
	}
	else
		_putchar(n + '0');
}
