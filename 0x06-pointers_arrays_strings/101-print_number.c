#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer using _putchar
 * @n: is the integer
 * Return: is void
 *
 *
 * if negative print the sign first, then convert to positive
 * take the incoming number and place each digit in an array
 * count the digits as you do it
 * then print the array in reverse
 */
void print_number(int n)
{
	char array[21] = "00000000000000000000";
	int i = 0, digits = 0, d;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		while (n > 0)
		{
			d = n - (n / 10) * 10;
			array[digits] = d + '0';
			digits++;
			if (n < 10)
			{
				array[digits] = d + '0';
				n = 0;
			}
			else
				n = n / 10;
		}
		i = digits;
		while (i > 0)
		{
			i--;
			_putchar(array[i]);
		}
	}
	else
		_putchar(n + '0');
}
