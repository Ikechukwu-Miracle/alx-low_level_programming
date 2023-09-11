#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table created
 *
 * Return: pointer to the newly created hash table
 * or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(shash_node_t *));
	if (hashTable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;
	hashTable->shead = NULL;
	hashTable->stail = NULL;

	return (hashTable);
}

/**
 * shash_table_set - adds a key and value to the sorted hash table
 * @ht: pointer to the hash table
 * @key: key to be added
 * @value: value corresponding to the key
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode, *curr;
	unsigned long int id;
	char *valcpy;

	if (ht == NULL || key == NULL)
		return (0);
	valcpy = strdup(value);
	id = key_index((const unsigned char *)key, ht->size);
	curr = ht->shead;
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = valcpy;
			return (1);
		}
		curr = curr->snext;
	}
	newNode = malloc(sizeof(shash_node_t));
	if (newNode == NULL)
	{
		free(valcpy);
		return (0);
	}
	newNode->value = valcpy;
	newNode->key =  strdup(key);
	if (newNode->key == NULL)
	{
		free(valcpy);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[id];
	ht->array[id] = newNode;
	if (ht->shead == NULL)
	{
		newNode->sprev = NULL;
		newNode->snext = NULL;
		ht->shead = newNode;
		ht->stail = newNode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNode->sprev = NULL;
		newNode->snext = ht->shead;
		ht->shead->sprev = newNode;
		ht->shead = newNode;
	}
	else
	{
		curr = ht->shead;
		while (curr->snext != NULL && strcmp(curr->snext->key, key) < 0)
			curr = curr->snext;
		newNode->sprev = curr;
		newNode->snext = curr->snext;
		if (curr->snext == NULL)
			ht->stail = newNode;
		else
			curr->snext->sprev = newNode;
		curr->snext = newNode;
	}
	return (1);
}

/**
 * shash_table_get -gets a value associated with a key in a sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key for finding the required value
 *
 * Return: the value or NULL on failure or not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new;
	unsigned long int id, n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	n = ht->size;
	id = key_index((const unsigned char *)key, n);
	if (id > (n - 1))
		return (NULL);

	new = ht->shead;
	while (new)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = new->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table orderly
 * @ht: pointer to the sorted hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int flag = 1;

	if (ht == NULL)
		return;

	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		if (!flag)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 0;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - printsa sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
        shash_node_t *temp;
        int flag = 1;

        if (ht == NULL)
                return;

        temp = ht->stail;
        printf("{");
        while (temp != NULL)
        {
                if (!flag)
                        printf(", ");
                printf("'%s': '%s'", temp->key, temp->value);
                flag = 0;
                temp = temp->sprev;
        }
        printf("}\n");
}

/**
 * shash_table_delete - delets a sorted hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *new, *temp;

	if (ht == NULL)
		return;

	new = ht->shead;
	while (new != NULL)
	{
		temp = new;
		new = new->snext;
		free(temp->value);
		free(temp->key);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
