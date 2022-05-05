#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlist
 * @head: a ptr to the ptr to the head node
 * @n: the value of the element in the new node
 * Return: a ptr to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp != NULL && temp->next != NULL)
		{
			temp = temp->next;
			if (temp->next == NULL)
				break;
		}
		temp->next = new;
	}
	return (new);
}
