#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list safely
 * @head: pointer to linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slowNode, *fastNode, *entrNode;
	size_t nodes = 1;
	int looped = 0;

	if (!head)
		exit(98);

	slowNode = head;
	fastNode = head;

	while (slowNode != NULL)
	{
		printf("[%p] %d\n", (void *)slowNode, slowNode->n);
		nodes++;
		slowNode = slowNode->next;
		if (fastNode != NULL && fastNode->next != NULL)
		{
			fastNode = fastNode->next->next;
			if (slowNode == fastNode)
			{
				looped = 1;
				break;
			}
		}

	}
	if (looped == 1)
	{
		entrNode = head;
		while (slowNode != entrNode)
		{
			printf("[%p] %d\n", (void *)slowNode, slowNode->n);
			nodes++;
			slowNode = slowNode->next;
			entrNode = entrNode->next;
		}
		printf("-> [%p] %d\n", (void *)entrNode, entrNode->n);
	}
	return (nodes);
}
