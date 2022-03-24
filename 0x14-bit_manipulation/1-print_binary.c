#include <unistd.h>
#include "main.h"
/**
 * power_of_2 - calcs the power of 2 to size
 * @size: the exponent
 * Return: the calc
 */

unsigned long power_of_2(int size)
{
	unsigned long power;
	int i = 1;

	if (size < 1)
		return (1);
	power = 1;
	while (i <= size)
	{
		i++;
		power = power * 2;
	}
	return (power);
}

/**
 * print_binary - takes an integer and converts it to a binary string
 * @n: the number
 * Return: the binary string representing the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, power2 = 2;

	if (n > 2)
	{
		while (n >= power2)
		{
			i++;
			power2 = power2 * 2;
		}
		i--;
	}
	power2 = power_of_2(i);
	if (n > 2)
	{
		while (i > 0)
		{
			if (n >= power2)
			{
				_putchar('1');
				n = n - power2;
			}
			else
				_putchar('0');
			i--;
			power2 = power_of_2(i);
		}
	}

	if (n == 0)
		_putchar('0');
	else
		_putchar('1');
}
