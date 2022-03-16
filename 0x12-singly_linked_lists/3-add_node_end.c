#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "lists.h"

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
 * add_node_end - adds a new node at the head of a linked list
 * @head: ptr to the list, structure type is list_t
 * @str: the string to be placed in the new node
 * Return: a ptr to the head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *np, *current = NULL, *prev = NULL;
	int count = 0;

	np = malloc(sizeof(list_t));
	if (np == NULL)
		return (NULL);
	current = *head;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
	}
	while (str[count] != '\0')
		count++;
	np->str = _strdup((char *)str);
	np->len = count;
	np->next = NULL;
	if (prev == NULL)
		*head = np;
	else
		prev->next = np;
	return (*head);
}
