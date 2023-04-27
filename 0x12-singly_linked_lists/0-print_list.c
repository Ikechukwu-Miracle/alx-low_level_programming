#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements of list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;

	}
	return (n);
}
