#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints a list of ints
 * @separator: used to separate the ints
 * @n: the number of ints in the function call
 * Return: is void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_ints;
	unsigned int i;

	va_start(my_ints, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_ints, int));
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_ints);
	putchar('\n');
}
