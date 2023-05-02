#include "lists.h"
/**
 * find_listint_loop - finds a loop within a linked list
 * @head: pointer to linked list
 *
 * Return: pointer to first node of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fastNode, *slowNode;

	fastNode = head;
	slowNode = head;

	while (fastNode && fastNode->next)
	{
		slowNode = slowNode->next;
		fastNode = fastNode->next->next;
		if (slowNode == fastNode)
			break;
	}
	if (!fastNode || !fastNode->next)
		return (NULL);

	slowNode = head;
	while (slowNode != fastNode)
	{
		fastNode = fastNode->next;
		slowNode = slowNode->next;
	}

	return (slowNode);
}
