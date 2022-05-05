#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index  - deletes a node at index
 * @h: a ptr to a ptr to the head node
 * @idx: the index of the required node
 * Return: 1 f successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL, *prev = NULL, *next = NULL;

	if (h == NULL || *h == NULL)
		return (-1);

	temp = *h;
	if (idx == 0)
	{
		if (temp->next != NULL)
		{
			*h = temp->next;
			temp->next->prev = NULL;
		}
		else
			*h = NULL;
	}
	else
	{
		while (count < idx && temp != NULL)
		{
			prev = temp;
			temp = temp->next;
			count++;
		}
		if (count != idx)
			return (-1);
		if (temp->next != NULL)
		{
			next = temp->next;
			prev->next = next;
			next->prev = prev;
		}
		else
			prev->next = NULL;
		}
	}
	free(temp);
	return (1);
}
