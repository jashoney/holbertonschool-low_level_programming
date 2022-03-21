#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the integers of held in a linked list
 * @h: a ptr to the start of a linked list
 * Return: the number of integers in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	printf("%d\n", h->n);
	count++;
	return (count);
}
