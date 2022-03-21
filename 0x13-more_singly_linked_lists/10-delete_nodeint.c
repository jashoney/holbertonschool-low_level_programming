#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: a ptr to a ptr to the start of a linked list
 * @index: the node that is to be deleted
 * Return: 1 if successful, or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *previous = NULL;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	while (current->next != NULL)
	{
		if (count == index)
			break;
		count++;
		previous = current;
		current = current->next;
	}
	if (count == index)
	{
		if (index == 0)
			*head = current->next;
		else
			previous->next = current->next;
		free(current);
		return (1);
	}
	else
		return (-1);
}
