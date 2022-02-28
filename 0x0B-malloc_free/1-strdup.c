#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: pointer to the string
 * Return: dest or NULL
 */
char *_strdup(char *str)
{
	char *dest;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

/*we want the NULL char at end of the string */
	dest = malloc(1 + size * sizeof(str[0]));

	if (dest == NULL)
		return (NULL);

	while (i <= size)
	{
		dest[i] = str[i];
		i++;
	}

	return (dest);
}
