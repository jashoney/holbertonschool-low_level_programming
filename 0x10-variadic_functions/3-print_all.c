#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: each char in format provides the type of its arg
 * Return: the sum of the args
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	if (format != NULL)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			printf("%s", separator);
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 's':
					printf("%s", va_arg(args, char *));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
			}
			i++;
			separator = ", ";
		}
		va_end(args);
		putchar('\n');
	}
}
