#include "hash_tables.h"

/**
 * hash_table_set - adds a new node to the hash table
 * @ht: pointer to the hah table to which new node is added
 * @key: the key to the new node
 * @value: value of the key
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned int long i, id;
	char *valcpy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	valcpy = strdup(value);

	id = key_index((const unsigned char *)key, ht->size);

	for (i = id; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valcpy;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valcpy);
		return (0);
	}

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = valcpy;
	newNode->next = ht->array[id];
	ht->array[id] = newNode;
	return (1);
}
