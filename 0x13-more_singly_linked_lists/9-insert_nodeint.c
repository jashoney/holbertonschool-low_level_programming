#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at number index nodes in
 * @h: a ptr to a ptr to the start of a linked list
 * @idx: the node that is returned
 * @v: the integer to be placed inside the new node
 * Return: NULL or  a ptr to the added node
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int v)
{
	unsigned int count = 0;
	listint_t *current, *previous = NULL, *new_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = v;
	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current->next != NULL)
	{
		if (count == idx)
			break;
		previous = current;
		current = current->next;
		count = count + 1;
	}
	if (count == idx)
	{
		previous->next = new_node;
		new_node->next = current;
		return (new_node);
	}
	return (NULL);
}
