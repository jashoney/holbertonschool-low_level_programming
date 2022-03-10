#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the value of the int args called
 * @n: the number of ints in the function call
 * Return: the sum of the args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_ints;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(my_ints, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(my_ints, int);
	va_end(my_ints);
	return (sum);
}
