#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - takes a binary string and converts it to an integer
 * @b: a ptr to the string
 * Return: the decimal number the binary string represents
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, power = 1, count = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] == '0' || b[count] == '1')
			count++;
		else
			return (0);
	}

	while (i < count)
	{
		power = power * 2;
		i++;
	}
	power = power / 2;

	i = 0;
	while (i < count)
	{
		sum = sum + power * (b[i] - '0');
		i++;
		power = power / 2;
	}
	return (sum);
}
