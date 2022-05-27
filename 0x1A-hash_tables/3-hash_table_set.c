#include "hash_tables.h"

/**
 * hash_table_set - adds an element(key, value) into a hash table
 * @ht: a pointer to the hash table
 * @key: the key
 * @value: the value
 * Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size, index;
	hash_node_t *new_node = NULL, *current = NULL;
	char *key_copy = strdup(key), *value_copy = strdup(value);

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	if (key_copy == NULL || value_copy == NULL)
	{
		if (key_copy == NULL)
			free(value_copy);
		else
			free(key_copy);
		return (0);
	}
	index = key_index((const unsigned char *)key, size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(key_copy, current->key) == 0)
		{
			free(key_copy);
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
