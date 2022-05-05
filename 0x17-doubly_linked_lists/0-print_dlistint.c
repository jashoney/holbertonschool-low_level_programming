#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints a list and returns the number of nodes
 * @h: ptr to the head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	count = 1;
	printf("%d\n", h->n);
	while (h != NULL || h->next != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		count++;
		if (h->next == NULL)
			break;
	}
	return (count);
}
