#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: used to separte the strings
 * @n: the number of strings in the function call
 * Return: the sum of the args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	char *current_string;
	unsigned int i;

	va_start(my_strings, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(my_strings, char*);
		if (current_string == NULL)
			printf("(nil)");
		else
		{
			if (i == 0)
				printf("%s", current_string);
			else if (separator == NULL)
				printf(" %s", current_string);
			else
				printf("%c %s", *separator, current_string);
		}
	}
	va_end(my_strings);
	putchar('\n');
}
