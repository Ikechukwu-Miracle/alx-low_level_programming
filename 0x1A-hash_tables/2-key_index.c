#include "hash_tables.h"

/**
 * key_index - gets the index at which the kay/value
 * should be stored in the given array
 * @key: the key of the hash table to get index for
 *
 * Return: the require index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keyIndex;

	keyIndex = hash_djb2(key) % size;
	return (keyIndex);
}
