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
/**
 * check_function - tests the opposing chars in a string
 * @src: ptr to the start of the string
 * @dest: ptr to the end char in the string
 * Return: 1 if a plaindrome, 0 if not
 */
int check_function(char *src, char *dest)
{
	if (*src != *dest)
		return (0);
	if (src >= dest)
		return (1);
	return (check_function(src + 1, dest - 1));
}
/**
 * is_palindrome - tests if a string is a palindrome
 * @s: a ptr to the string
 * Return: 1 if a plaindrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *dest;

	if (*s == '\0')
		return (0);
	dest = last_char_in_string(s);
	return (check_function(s, dest));
}
