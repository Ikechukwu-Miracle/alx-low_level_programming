#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: points to linked list
 * @index: position of node to be deleted
 * Return: 1 if successful -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode = *head;
	listint_t *currNode = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = currNode->next;
		free(currNode);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prevNode = currNode;
			currNode = currNode->next;
			index--;
		}
		if (!prevNode || !currNode)
			return (-1);

		prevNode->next = currNode->next;
		free(currNode);
		return (1);
	}
}
