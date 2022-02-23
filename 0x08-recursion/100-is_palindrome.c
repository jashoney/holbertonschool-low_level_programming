#include "main.h"
/**
 * last_char_in_string - returns a ptr to the last non-null char in a string
 * @src: ptr to the string
 * Return: a ptr to the last char in a string
 */
char *last_char_in_string(char *src)
{
	if (*(src + 1) != '\0')
		return (last_char_in_string(src + 1));
	return (src);
}

int check_function(char *src, char *dest)
{
	if (*src != *dest)
		return (0);
	if (src >= dest)
		return (1);
	return (check_function(src + 1, dest - 1));
}
/**
 * is_palindrome
 * s:
 * Return:
 */
int is_palindrome(char *s)
{
	char *dest;

	if (*s == '\0')
		return (0);
	dest = last_char_in_string(s);
	return (check_function(s, dest));
}
