#include "main.h"

/**
 * is_in_string - returns 1 if string dest is within a string src
 * @src : the string to check
 * @dest: the string to test
 * Return: 1 if true, 0 if false
 */

int is_in_string(char *dest, char *src)
{
	unsigned int j = 0, lenofdest = 0, match = 0;

	while (dest[j] != '\0')
	{
		lenofdest++;
		j++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if (dest[j] != '\0')
		{
			if (src[j] == dest[j])
				match++;
		}
		else
			return (0);
		if (match == lenofdest)
			return (1);
		j++;
	}
	return (0);
}

/**
 * _strstr - points to where a string needle is first found in string haystack
 * @needle: the search string
 * @haystack: the string to be searched
 * Return: a pointer to the first match, or null if no match is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0; 
	int test = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
			test = is_in_string(needle, &haystack[i]);
		if (test == 1)
			return (&haystack[i]);
		i++;
	}
	return (0);
}
