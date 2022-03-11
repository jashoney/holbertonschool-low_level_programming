#include "main.h"
#include <stdlib.h>

/**
 * print_char - prints a char using _putchar
 * @args: ptr to the va_list we are moving through
 * Return: is void
 */
void print_char(va_list *vargs)
{
	char c;

	c = va_args(*vargs, int);
	_putchar(c);
}
/**
 * print_string - prints a string using _putchar
 * @args: ptr to the va_list we are moving through
 * Return: is void
 */
void print_string(va_list *vargs)
{
	char *c;

	c = va_args(*vargs, char *)
	if (c != NULL)
	{	
		while (*char != '\0')
		{	
			_putchar(*c);
			c++;
		}
	} 
}
/**
 * _printf - a function that prints a string using _putchar
 * @format: the fixed string to print
 * Return: the count of the chars in the string
 */

int _printf(const char *format, ...)
{
	int count = 0; 					/* we return (count = strlen(format)) */
	int i = 0, j; 					/* loop variables i and j */
	/* insert data structure here */

	if (format == NULL)				/* test format for NULL */
		return (0);

	while (format[count] != '\0')			/* find strlen of format*/
		count++;

	vi_list vargs;					/* function call argv is called s */
	vi_start (vargs, format);				/* start moving through argv after format */

	while (format[i] != '\0')			/* move across format */
	{	
		if (format[i] = '%')   			/* format[i] is a % */
		{
			if ((format[i + 1] == 'c') || (format[i + 1] == 's'))  /* the next char is also an identifier */
			{
				i++;			/* move to next char in format */
				j = 0;			/* first row of struct */
				while (mystruct[j].ch != '\0')	/* move downs struct rows */
				{
					if (mystruct[j].ch = format[i])	/* directive found */  
					{
						mystruct[j].f(&vargs);	/* call function for directive passing address of **argv */
					}	
				}
				j++;			/* move to the next row in structure */
			}
			else 
				_putchar(format[i]);    /* print the % */
		}
		else
			_putchar(format[i]);  		/* print current char in string format */
		}
		i++;					/* move to the next char in format */
	}
	vi_end(vargs);					/* free up the va_list */
	return (count);
}
