#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table created
 *
 * Return: pointer to the newly created hash table
 * or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(hash_node_t *));
	if (hashTable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;

	return (hashTable);
}
