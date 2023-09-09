#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i  = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", new->key, new->value);
			flag = 1;
			new = new->next;
		}
	}
	printf("}\n");
}
