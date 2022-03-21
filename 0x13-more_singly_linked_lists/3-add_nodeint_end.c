#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node into a linked list at its end
 * @head: a ptr to a ptr to the start of a linked list
 * @value: the int value of the new node
 * Return: a ptr to the newly inserted node
 */

listint_t *add_nodeint_end(listint_t **head, const int value)
{
	listint_t *newnode, *current;

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->next = NULL;
	current = *head;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
