#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: a ptr to a hash table
 * @key: the key value used to generate an array index in the ht
 * Return: NULL if not found or value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
