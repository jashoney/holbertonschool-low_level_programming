#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies a string from src to dest
 * @dest: dest string ptr
 * @src: source string ptr
 * Return: a ptr dest to the copied string or NULL
 */

char *_strdup(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

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
	int size = 0;
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->age = age;
	while (name[size] != '\0')
		size++;
	newdog->name = malloc(size + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = _strdup(newdog->name, name);
	size = 0;
	while (owner[size] != '\0')
		size++;
	newdog->owner = malloc(size + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = _strdup(newdog->owner, owner);
	return (newdog);
}
