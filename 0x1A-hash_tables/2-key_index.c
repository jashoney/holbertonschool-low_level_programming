#include "hash_tables.h"

/**
 * key_index - takes a string and returns an index value
 * @key: the string
 * @size: the hash table array size
 * Return: the index value created by the hash function
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
