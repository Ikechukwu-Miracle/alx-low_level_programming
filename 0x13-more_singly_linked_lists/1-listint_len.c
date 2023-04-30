#include "lists.h"

/**
 * listint_len - returns the number of nodes of a linked list
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
