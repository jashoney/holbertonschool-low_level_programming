#include "main.h"

/*
 * _isupper - this function returns a 0 if lowercase and 1 if uppercase
 * @c: the char to be tested
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
