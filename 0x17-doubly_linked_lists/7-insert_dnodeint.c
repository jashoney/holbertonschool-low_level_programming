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
	dlistint_t *new = NULL, *temp = NULL, *prev = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	new = malloc(sizeof(*new));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	while (temp != NULL && count < idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (count + 1 < idx)
		return (NULL);
	if (count + 1 == idx)
	{
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		new->next = temp;
		if (prev != NULL)
		{
			new->prev = prev;
			prev->next = new;
		}
		else
			temp->prev = new;
	}
	return (new);
}
