#include "main.h"

/**
 * _islower - returns 1 if c is lowercase or 0 otherwise
 * @c: the number of input
 * Return: as above
 */
int _islower(int c)
{
	if ((c >= 'a') &&  (c <= 'z'))
		return (1);
	else
		return (0);
}
