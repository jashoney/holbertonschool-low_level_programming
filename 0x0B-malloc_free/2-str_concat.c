#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cats two strings together
 * @s1: ptr to the first string
 * @s2: ptr to the second string
 * Return: dest or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1size = 0, s2size = 0;
	char charsize, *dest;

	if (s1 == NULL && s2 == NULL)
	{
		dest = malloc(1 * sizeof(charsize));
		dest[0] = '\0';
		return (dest);
	}
	if (s1 != NULL)
	{
		while (s1[s1size] != '\0')
			s1size++;
	}
	if (s2 != NULL)
	{
		while (s2[s2size] != '\0')
			s2size++;
	}
	if (s1size > 0)
		dest = malloc(1 + (s1size + s2size) * sizeof(s1[0]));
	else
		dest = malloc(1 + (s1size + s2size) * sizeof(s2[0]));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < s1size; i++)
		dest[i] = s1[i];
	if (s2size == 0)
		dest[s1size + 1] = '\0';
	else
	{
		for (i = 0; i <= s2size; i++)
			dest[i + s1size] = s2[i];
	}
	return (dest);
}
