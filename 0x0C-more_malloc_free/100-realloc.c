#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory with malloc
 * @ptr: pointer to prev memory
 * @old_size: size of prev memory
 * @new_size: size of current memory
 * Return: pt
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int x;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pt = malloc(new_size);

	if (!pt)
		return (NULL);

	if (new_size < old_size)
	{
		for (x = 0 ; x < new_size ; x++)
			pt = ptr;
	}

	if (old_size < new_size)
	{
		for (x = 0 ; x < old_size ; x++)
			pt = ptr;
	}
	free(ptr);

	return (pt);
}
