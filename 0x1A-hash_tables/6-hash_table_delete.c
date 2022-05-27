#include "hash_tables.h"

/**
 * hash_table_delete - frees a ht from memory
 * @ht: a ptr to the ht
 * Return: is void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *temp = NULL, *current = NULL;

	if (ht == NULL)
		return;

	size = ht->size;
	while (i < size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			current = temp;
			temp = temp->next;
			free(current->key);
			free(current->value);
			free(current);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
