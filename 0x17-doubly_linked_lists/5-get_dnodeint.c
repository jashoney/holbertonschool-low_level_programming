#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index
 * @head: a ptr to the head node
 * @index: the index of the required node
 * Return: a ptr to the required node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && head->next != NULL)
	{
		head = head->next;
		count++;
		if (index == count)
			return (head);
	}
	if (index == count)
		return (head);
	return (NULL);
}
