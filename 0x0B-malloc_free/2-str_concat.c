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
	char *dest;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
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
/* we want a NULL char at end of the string dest */
	if (s1size > 0)
		dest = malloc(1 + (s1size + s2size) * sizeof(s1[0]));
	else
		dest = malloc(1 + (s1size + s2size) * sizeof(s2[0]));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < s1size)
	{
		dest[i] = s1[i];
		i++;
	}
	i = 0;
	if (s2size == 0)
		dest[s1size + 1] = '\0';
	else
	{
		while (i <= s2size)
		{
			dest[i + s1size] = s2[i];
			i++;
		}
	}
	return (dest);
}
