#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements of
 * a linked list
 * @h: pointer to the linked list
 * Return: number of elements (numE)
 */

size_t list_len(const list_t *h)
{
	size_t numE = 0;

	while (h)
	{
		h = h->next;
		numE++;
	}

	return (numE);
}
