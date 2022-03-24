#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - takes a binary string and converts it to an integer
 * @b: a ptr to the string
 * Return: the decimal number the binary string represents
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		sum = sum << 1;
		sum = sum + b[i] - '0';
		i++;
	}

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}
	return (sum);
}
