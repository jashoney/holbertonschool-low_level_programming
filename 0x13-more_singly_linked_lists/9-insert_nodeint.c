#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at number index nodes in
 * @head: a ptr to the start of a linked list
 * @idx: the node that is returned
 * @v: the integer to be placed inside the new node
 * Return: NULL or  a ptr to the added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int v)
{
	unsigned int count = 0;
	listint_t *current, *next_node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx != 0)
		return (NULL);
	current = *head;
	while (current->next != NULL)
	{
		if (count == idx - 1)
			break;
		count++;
		current = current->next;
	}
	if (count == idx - 1)
	{
		next_node = malloc(sizeof(*next_node));
		if (next_node == NULL)
			return (NULL);
		next_node->n = v;
		next_node->next = current->next;
		current->next = next_node;
		return (next_node);
	}
	else
		return (NULL);
}
