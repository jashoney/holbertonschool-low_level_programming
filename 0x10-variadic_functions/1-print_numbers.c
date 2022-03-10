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
		if (i == 0)
			printf("%d", va_arg(my_ints, int));
		else if (separator == NULL)
			printf(" %d", va_arg(my_ints, int));
		else
			printf("%c %d", *separator, va_arg(my_ints, int));
	}
	va_end(my_ints);
	putchar('\n');
}
