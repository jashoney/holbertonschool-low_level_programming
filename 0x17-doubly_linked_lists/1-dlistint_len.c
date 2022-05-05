#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a list
 * @h: ptr to the head node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	count = 1;
	while (h != NULL || h->next != NULL)
	{
		h = h->next;
		count++;
		if (h->next == NULL)
			break;
	}
	return (count);
}
