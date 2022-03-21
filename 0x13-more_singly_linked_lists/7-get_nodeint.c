#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the value of the node number index
 * @head: a ptr to the start of a linked list
 * @index: the node that is returned
 * Return: 0, or value of the index' node in the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}
	if (count == index)
		return (head);
	else
		return (NULL);
}
