#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the begiining of a dlist
 * @head: a ptr to the ptr to the head node
 * @n: the value of the element in the new node
 * Return: a ptr to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	temp = *head;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (temp != NULL)
	{
		temp->prev = new;
		new->next = temp;
	}
	*head = new;
	return (new);
}
