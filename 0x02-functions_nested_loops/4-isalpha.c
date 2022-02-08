#include "main.h"

/**
 * _isalpha - returns 1 if c is alpha or 0 otherwise
 * @c: the number of input
 * Return: as above
 */
int _isalpha(int c)
{
	if ((c >= 'a') &&  (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
