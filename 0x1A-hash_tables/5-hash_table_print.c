#include "hash_tables.h"

/**
 * hash_table_print - prints a ht
 * @ht: a ptr to a ht
 * Return: is void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *temp = NULL;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");

	size = ht->size;
	while (i < size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
