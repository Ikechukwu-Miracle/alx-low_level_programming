#include "hash_tables.h"

/**
 * hash_table_get -gets a value associated with a key in a hash table
 * @ht: pointer to the hash table
 * @key: key for finding the required value
 *
 * Return: the value or NULL on failure or not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int id, n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	n = ht->size;
	id = key_index((const unsigned char *)key, n);
	if (id > (n - 1))
		return NULL;

	new = ht->array[id];
	while (new)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = new->next;
	}

	return (NULL);
}
