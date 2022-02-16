#include "main.h"

/**
 * string_toupper - converts lowercase chars in a string to uppercase
 * @ptr: is the pointer to our string
 * Return: the ptr to the string
 */
char *string_toupper(char *ptr)
{

/*
 * count the chars in the string
 * move through the string one char at a time
 * replace any lowercase chars with an uppercase one
 */
	int len = 0, i = 0;

	while (ptr[len] != '\0')
		len++;
	while (i < len)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
		i++;
	}
	return (ptr);
}
