#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - cats two strings
 * @s1: ptr to first string
 * @s2: ptr to second string
 * @n: the number of bytes of s2 to use
 * Return: a ptr to the new string, or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int lens1 = 0, lens2 = 0, len_n, i = 0, j = 0;

	if (s1 == NULL)
		lens1 = 0;
	else
	{
		while (s1[lens1] != '\0')
			lens1++;
	}
	if (s2 == NULL)
		lens2 = 0;
	else
	{
		while (s2[lens2] != '\0')
			lens2++;
	}
	if (lens2 > n)
		len_n = lens1 + n;
	else
		len_n = lens1 + lens2;
	newstring = malloc(len_n * sizeof(newstring[0]) + 1);
	if (newstring == NULL)
		return (NULL);
	while (i < lens1)
	{
		newstring[i] = s1[i];
		i++;
	}
	while (i < len_n)
	{
		newstring[i] = s2[j];
		i++;
		j++;
	}
	newstring[i] = '\0';
	return (newstring);
}
