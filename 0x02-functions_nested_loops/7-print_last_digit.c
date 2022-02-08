#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @n: the input number
 *
 * Return: print of the last digit of n
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = (n % 10);
	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
