#include "main.h"

/**
 * is_changechar - compares char to a list
 *                changes a tab to a space
 * @s: pointer to a char
 * Return: is void
 */

void is_changechar(char *s)
{
	int i = 0;
	int candidates[10] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int replacements[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	while (i < 10)
	{
		if (*s == candidates[i])
			*s = replacements[i];
		i++;
	}
}
/**
 * leet - moves through a string changing values of some letters into numbers
 * @ptr: is the pointer to our string
 * Return: the ptr to the string
 */
char *leet(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		is_changechar(&ptr[i]);
		i++;
	}
	return (ptr);
}
