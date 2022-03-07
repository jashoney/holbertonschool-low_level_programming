#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - sets up values into struct dog
 * @d: a ptr to the structure dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the name of its owner
 * Return: is void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
