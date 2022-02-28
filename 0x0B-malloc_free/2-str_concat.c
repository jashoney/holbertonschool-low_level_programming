#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cats two strings together
 * @s1: the
 * Return: dest or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, s1size = 0, s2size = 0;
	char *dest;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[s1size] != '\0')
		s1size++;

	while (s2[s2size] != '\0')
		s2size++;

/* we want a NULL char at end of the string dest */
	if (s1size > 0)
		dest = malloc(1 + (s1size + s2size) * sizeof(s1[0]));
	else
		dest = malloc(1 + (s1size + s2size) * sizeof(s2[0]));

	if (dest == NULL)
		return (NULL);

	while (i < s1size)
	{
		dest[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2size)
	{
		dest[i] = s2[i];
		i++;
	}
	return (dest);
}
