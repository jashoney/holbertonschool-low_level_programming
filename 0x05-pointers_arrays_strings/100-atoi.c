#include "main.h"

/**
 * strlength - finds the length of a string
 * @src: is a pointer to an string of characters
 * Return: void
 */
int strlength(char *src)
{
	int length = 0;

	while (src[length] != '\0')
		length++;
	return (length);
}

/**
 * strcut - cuts the integers out of a string
 * @src: points to the string
 * @length: length of the string chars
 * Return: the integer that is left, which must be signed
 */

int strcut(char *src, int length)
{
	int finalnumber = 0, sign = 1, loop = 0;
	unsigned int number = 0;

	while (loop <= length)
	{
		if (src[loop] >= '0' && src[loop] <= '9')
		{
			number = number * 10 + (src[loop] - '0');
		}
		else if (src[loop] == '-')
			sign = sign * -1;
		else
		{
			if (number > 0)
				break;
		}
		loop++;
	}
	finalnumber = number * sign;
	return (finalnumber);
}
/**
 * _atoi - input string at *src and convert it to integer
 * @src: points to a string
 * Return: the pointer dest
 */
int _atoi(char *src)
{
	int stringlength = 0, newint = 0;

	stringlength = strlength(src);
	if (stringlength > 0)
		newint = strcut(src, stringlength);
	return (newint);
}
