#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of nodes = size
 * @size: the number of nodes in the hash table
 * Return: a ptr to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(*ht));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		return (NULL);
		free(ht);
	}

	return (ht);
}
