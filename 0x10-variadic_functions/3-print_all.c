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
					break;
				case 'i':
					printf("%s", separator);
					printf("%d", va_arg(args, int));
					break;
				case 's':
					printf("%s", separator);
					string = va_arg(args, char *);
					if (string == NULL)
						printf("(nil)");
					else
						printf("%s", string);
					break;
				case 'f':
					printf("%s", separator);
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
