#include "lists.h"
/**
 * length_before_loop - returns length of nodes
 * of a linked list nefore loop
 * @head: pointer to linked list
 * Return: number of nodes
 */
size_t length_before_loop(const listint_t *head)
{
	const listint_t *slowNode, *fastNode;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

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
 * print_listint_safe - prints a looped linked list
 * @head: pointer to linked list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i;

	n = length_before_loop(head);

	if (n == 0)
	{
		for (; head != NULL ; n++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}

	return (n);
}
