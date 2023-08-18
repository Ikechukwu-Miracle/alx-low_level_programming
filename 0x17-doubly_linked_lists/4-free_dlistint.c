#include "lists.h"

/**
 * free_dlistint - deallocates a doubly linked list
 * @head: pointer to the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
