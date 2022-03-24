#include <stdio.h>
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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * get_bit - takes an integer and converts it to a binary string
 * @n: the number
 * @index: the index of the string to return
 * Return: the bit at index or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, power2 = 2;
	char bit;

	if (n > 1)
	{
		while (n >= power2)
		{
			i++;
			power2 = power2 * 2;
		}
		i--;

		if (index > i + 1)
			return (-1);

		power2 = power_of_2(i);
		while (i > 0)
		{
			if (n >= power2)
			{
				n = n - power2;
				bit = 1;
			}
			else
				bit = 0;
			if (index == i)
				return (bit);
			i--;
			power2 = power_of_2(i);
		}
	}
	if (index == 0)
		return (n);
	else
		return (-1);
}
