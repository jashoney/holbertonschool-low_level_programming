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
	listint_t *current, *new_node = NULL;

	if (h == NULL)				/* &head is NULL */
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);			/* impossible to add */
	if (idx != 0)
	{
		current = *h;
		while (count < idx - 1 && current != NULL) /*we want to insert at idx-1*/
		{
			current = current->next;
			count++;
		}
		if (current == NULL)		/*fail if we can't insert at idx-1*/
			return (NULL);
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)                   /* malloc failed */
		return (NULL);
	new_node->n = v;
	if (idx == 0)				/* add node at start of list */
	{
		new_node->next = *h;
		*h = new_node;
	}
	else					/* add node at idx-1*/
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
