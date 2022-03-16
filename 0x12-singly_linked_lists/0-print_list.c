#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t linked list
 * @h: ptr to the list, structure type is list_t
 * Return: the count of node in the linked list
 */

size_t print_list(const list_t *h)
{
	int nodecount = 0;

	while (h != NULL)
	{
		nodecount = nodecount + 1;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodecount);
}

