#include "main.h"

/**
 * set_bit - takes an integer and into binary and changes a bit
 * @n: the number
 * @index: the index of the bit to change
 * Return: 1 if it worked or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n2 = 1;
	unsigned int i = 1;

	if (index > 63)
		return (-1);
	while (i <= index)
	{
		n2 = n2 << 1;
		i++;
	}
	*n = *n | n2;
	return (1);
}
