#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees the allocated memory of a linked list
 * @head: a ptr to the start of a linked list
 * Return: is void
 */

void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	if (head != NULL)
	{
		current_node = head;
		while (current_node->next != NULL)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
		}
		free(current_node);
	}
}
