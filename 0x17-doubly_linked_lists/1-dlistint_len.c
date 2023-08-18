#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: points to the first node in the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
