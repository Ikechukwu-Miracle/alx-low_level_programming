#include "lists.h"

/**
 * length_looped - returns number of nodes
 * in a looped link
 * @head: pointer to linked list
 *
 * Return: number of nodes if looped
 */
size_t length_looped(const listint_t *head)
{
	const listint_t *slowNode, *fastNode;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		exit (98);

	slowNode = head->next;
	fastNode = head->next->next;

	while (fastNode)
	{
		if (slowNode == fastNode)
		{
			slowNode = head;
			while (slowNode != fastNode)
			{
				nodes++;
				slowNode = slowNode->next;
				fastNode = fastNode->next;
			}

			slowNode = slowNode->next;
			while (slowNode != fastNode)
			{
				nodes++;
				slowNode = slowNode->next;
			}
			return (nodes);
		}

		slowNode = slowNode->next;
		fastNode = fastNode->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list with loop
 * @head: pointer to the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = length_looped(head);
	size_t i;

	if (n == 0)
	{
		for (; head != NULL ; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0  ; i < n ; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
