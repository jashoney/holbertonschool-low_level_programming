#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints chars, ints strings and floats
 * @format: each char in format provides the type of its arg
 * Return: the sum of the args
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "", *string;

	if (format != NULL)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s", separator);
					printf("%c", va_arg(args, int));
					separator = ", ";
					break;
				case 'i':
					printf("%s", separator);
					printf("%d", va_arg(args, int));
					separator = ", ";
					break;
				case 's':
					printf("%s", separator);
					string = va_arg(args, char *);
					if (string == NULL)
					{
						printf("(nil)");
						separator = ", ";
						break;
					}
					printf("%s", string);
					separator = ", ";
					break;
				case 'f':
					printf("%s", separator);
					printf("%f", va_arg(args, double));
					separator = ", ";
					break;
			}
			i++;
		}
		va_end(args);
		putchar('\n');
	}
}
