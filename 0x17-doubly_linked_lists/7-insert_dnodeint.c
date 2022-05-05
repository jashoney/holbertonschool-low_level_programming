#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: a ptr to a ptr to the head node
 * @idx: the index of the required node
 * @n: the value of the new node
 * Return: a ptr to the required node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *temp, *prev = NULL;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	temp = *h;
	while (temp != NULL && count < idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (count < idx - 1)
		return (NULL);
	else if (count == idx - 1)
		temp->next = new;
	else
	{
		if (prev != NULL)
		{
			new->prev = prev;
			prev->next = new;
		}
		new->next = temp;
	}
	return (new);
}
