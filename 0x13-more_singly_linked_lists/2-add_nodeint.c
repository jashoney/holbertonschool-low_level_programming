#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a node into a linked list at its beginning
 * @head: a ptr to a ptr to the start of a linked list
 * @value: the int value of the new node
 * Return: a ptr to the newly inserted node
 */

listint_t *add_nodeint(listint_t **head, const int value)
{
	listint_t *newnode;

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	if (head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}
