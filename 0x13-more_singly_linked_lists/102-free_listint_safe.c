#include "lists.h"
/**
 * free_listint_safe - frees a linkrd list safely
 * @h: pointer to pointer to linked list
 *
 * Return: length of linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int d;
	listint_t *tmp;

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
		}
	}
	*h = NULL;

	return (n);
}
