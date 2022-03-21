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
	listint_t *current, *previous = NULL, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = v;
	if (idx == 0 && *head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		current = *head;
		new_node->next = current->next;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
	{
		if (count == idx)
			break;
		previous = current;
		current = current->next;
		count = count + 1;
	}
	if (count == idx)
	{
		previous->next = new_node;
		new_node->next = current;
		return (new_node);
	}
	return (NULL);
}
