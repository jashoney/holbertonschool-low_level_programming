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
	int finalnumber = 0, signcount = 0, loop = 0;
	unsigned int number = 0;

	while (loop <= length)
	{
		if (src[loop] >= '0' && src[loop] <= '9')
		{
			number = number * 10 + (src[loop] - '0');
		}
		else if (src[loop] == '-' || src[loop] == '+')
		{
			if (src[loop] == '-')
				signcount--;
			else
				signcount++;
		}
		else
		{
			if (number > 0)
				break;
		}
		loop++;
	}
	if (signcount < 0)
		signcount = -1;
	else
		signcount = 1;
	finalnumber = number * signcount;
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
