#include "main.h"

/**
 * get_bit - finds the value of a bit at index in a binary number
 * @n: the number
 * @index: the index of the string to return
 * Return: the bit at index or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;

	while (i < index)
	{
		if (n == 0)
			return (-1);
		n = n >> 1;
		i++;
	}
	return (n & 1);
}
