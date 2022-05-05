#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlist from memory
 * @head: a ptr to the head node of the list
 * Return: is void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	if (head != NULL)
	{
		temp = head->next;
		free(head);
		while (temp != NULL && temp->next != NULL)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
		free(temp);
	}
}
