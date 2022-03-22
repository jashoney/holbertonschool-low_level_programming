#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @h: a ptr to a ptr to the start of a linked list
 * Return: a ptr to the newly inserted node
 */

listint_t *reverse_listint(listint_t **h)
{
	listint_t *current = NULL, *hold = NULL;

	if (h == NULL)
		return (NULL);
	while (*h != NULL)
	{
		current = *h;
		*h = current->next;
		if (hold == NULL)
		{
			hold = current;
			current->next = NULL;
		}
		else
		{
			current->next = hold;
			hold = current;
		}
	}
	*h = current;
	return (*h);
}
