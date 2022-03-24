#include <stdio.h>
#include "main.h"

/**
 * bin - prints a binary number
 * @n: the number using printf("%lu, n & 1);
 *
 * Return: is void
 */

void bin(unsigned long int n)
{
	if (n > 1)
		bin(n >> 1);
/*	printf("%lu", n & 1);*/
}

/**
 * flip_bits - compares two to find how many bits are different
 * @n: a number
 * @m: a number
 * Return: 1 if it worked or -1 if failed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int i = 0, count = 0;

	x = n ^ m;
	while (i <= 63)
	{
		if (x & 1)
			count++;
		x = x >> 1;
		i++;
	}
	return (count);
}
