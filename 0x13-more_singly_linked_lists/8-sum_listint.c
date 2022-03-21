#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums the integers in a linked list
 * @head: a ptr to the start of a linked list
 * Return: the sum of integers in the list
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (sum);
	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;
	return (sum);
}
