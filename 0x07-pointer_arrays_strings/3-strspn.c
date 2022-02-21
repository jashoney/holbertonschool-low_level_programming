#include "main.h"
/**
 * is_in_string - returns 1 if a char is within a string
 * @string: the string to check
 * @c: the char to test
 * Return: 1 if true, 0 if false
 */

int is_in_string(char *string, char c)
{
	int j = 0;

	while (string[j] != '\0')
	{
		if (string[j] == c)
			return (1);
		j++;
	}
	return (0);
}

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: initial segment
 * @accept: test string
 * Return: the number of bytes counted
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0;
	int test;

	while (s[i] != '\0')
	{
		test = is_in_string(accept, s[i]);
		if (count > 0)
		{
			if (test == 1)
				count++;
			else
				return (count);
		}
		else
		{
			if (test == 1)
				count++;
		}
		i++;
	}
	return (count);
}
