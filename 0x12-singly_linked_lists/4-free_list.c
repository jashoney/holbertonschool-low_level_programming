#include <stdlib.h>
#include "lists.h"


void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (head != NULL)
	{
		current_node = head;
		while (current_node->next != NULL)
		{
			next_node = current_node->next;
			free(current_node->str);
			free(current_node);
			current_node = next_node;
		}
		free(current_node->str);
		free(next_node);
	}
}
