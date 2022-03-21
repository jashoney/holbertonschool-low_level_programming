#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes a head node of a linked list
 * @head: a ptr to a ptr to a linked list
 * Return: the value of the int in the popped node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return (0);
	current_node = *head;
	value = current_node->n;
	*head = current_node->next;
	free(current_node);
	return (value);
}
