#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - cats two strings together
 * @s1: ptr to the first string
 * @s2: ptr to the second string
 * Return: dest or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1size = 0, s2size = 0, size = 0; 
	char *dest;

	if (s1 == NULL && s2 == NULL)
	{
		dest = NULL;
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
	size = s1size + s2size;
	if (s1size > 0)
		dest = malloc(1 + size * sizeof(char));
	else
		dest = malloc(1 + size * sizeof(char));
	if (dest == NULL)
	{
		free(dest);	
		return (NULL);
	}
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

/**
 * argstostr - concatonates all the arguments of a program
 * @ac: is argc
 * @av: is argv: a ptr to a ptr of chars
 * Return: a ptr to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	char *newstring = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		newstring = str_concat(newstring, av[i]);
		newstring = str_concat(newstring, "\n");
		i++;
	}
	i = 0;
	while (newstring[i] != '\0')
		i++;
	return (newstring);
}	
