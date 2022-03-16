#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_length - returns the number of elements in a list_t linked list
 * @h: ptr to the list, structure type is list_t
 * Return: the count of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	int nodecount = 0;

	while (h != NULL)
	{
		nodecount = nodecount + 1;
		h = h->next;
	}
	return (nodecount);
}

