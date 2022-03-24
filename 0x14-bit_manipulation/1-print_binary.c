#include <stdlib.h>
#include "main.h"

/**
 * print_binary - recursively splits out each binary bit of an integer
 * @n: the integer
 * Return: the binary form of the number n
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}


