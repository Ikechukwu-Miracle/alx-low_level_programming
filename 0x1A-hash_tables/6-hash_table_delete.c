#include "hash_tables.h"

/**
 * hash_table_delete - delets a hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new != NULL)
		{
			temp = new->next;
			free(new->value);
			free(new->key);
			free(new);
			new = temp;
		}
	}
	free(ht->array);
	free(ht);
}
