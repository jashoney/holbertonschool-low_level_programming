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
 * _strpbrk - returns the point in a string where s first matchs a char accept
 * @s: the test string s
 * @accept: test string accept
 * Return: a pointer to the first match, or null if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, test;

	while (s[i] != '\0')
	{
		test = is_in_string(accept, s[i]);
		if (test == 1)
			return (&s[i]);
		i++;
	}
	return (0);
}
