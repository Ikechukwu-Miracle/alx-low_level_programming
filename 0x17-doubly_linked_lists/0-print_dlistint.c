#include "lists.h"

/**
 * print_dlistint - prints the elements in a doubly linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
