#include "main.h"

/**
 * _strlen: returns the length of a string
 * @s: pointer to the string
 * Return: the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;
	return (len);
}

/**
 * _convert - convert lowercase char to uppercase char
 * @s: pointer to the char byte
 * Return: is void
 */

void _convert(char *s)
{
	if (*s >= 'a' && *s <= 'z')
		*s = *s - 32;
}

/**
 * is_separator - compares char to a list
 *                changes a tab to a space
 * @s: pointer to a char
 * Return: 1 if in the list, 0 if not
 */

int is_separator(char *s)
{
	int i = 0;
	int separators[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (i < 13)
	{
		if (*s == separators[i])
		{
/*
 * 			if (*s == 9)
 * 			*s = 32;
 */ 	
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * cap_string - converts first letter in a word to uppercase
 * @ptr: is the pointer to our string
 * Return: the ptr to the string
 */
char *cap_string(char *ptr)
{
/*
 * first move through the string looking for separators of words
 * the next char after a separator is sent to convert to be capitilised
 * stop at the null char
 */
	int i = 0, test = 0, len = 0;

	len = _strlen(ptr);
	while (i < len)
	{
		if (test == 1)
			_convert(&ptr[i]);
		test = is_separator(&ptr[i]);
		i++;
	}
	return (ptr);
}
