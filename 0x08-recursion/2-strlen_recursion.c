#include "main.h"

/**
 * _strlen_recursion - recursively calcs the length of a string
 * @s: a ptr to the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = _strlen_recursion(s + 1) + 1;
		return (length);
	}
	else
		return (0);
}
