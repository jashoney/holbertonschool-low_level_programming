#include "main.h"
/**
 * _strchr - loactes a char in a string
 * @s: a ptr to the string
 * @c: the char to be located
 * Return: the location of the char c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
