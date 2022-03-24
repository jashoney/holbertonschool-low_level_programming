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
 * clear_bit - takes an integer and into binary and changes a bit
 * @n: the number
 * @index: the index of the bit to change
 * Return: 1 if it worked or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n2 = 1, temp = *n;
	unsigned int i = 1;

	if (index > 63)
		return (-1);
	while (i <= index)
	{
		n2 = n2 << 1;
		i++;
	}
	temp = ~temp;
	temp = temp | n2;
	*n = ~temp;
	return (1);
}
