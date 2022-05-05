#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums the node values
 * @head: a ptr to the head node
 * Return: 0 or the sum
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL && head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;
	return (sum);
}
