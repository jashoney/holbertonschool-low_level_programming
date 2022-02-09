#include "main.h"

/**
 * _isdigit - tests a char to see if it is a digit
 *
 * @c: the char to be tested, input as its ascii table value
 * Return: 1 if a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
