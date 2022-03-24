#include "main.h"

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
