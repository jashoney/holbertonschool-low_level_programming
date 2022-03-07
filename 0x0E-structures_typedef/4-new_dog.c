#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: it's age
 * @owner: dog owner's name
 * Return: a ptr to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = _strdup(name);
	newdog->age = age;
	newdog->owner = _strdup(owner);
	return (newdog);
}
