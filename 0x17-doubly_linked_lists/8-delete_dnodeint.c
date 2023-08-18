#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to pointer to linked list
 * @index: position of node to be deleted
 *
 * Return: 1 if successfully deleted or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currNode = *head;
	unsigned int i = 0;

	while (currNode != NULL)
	{
		if (i == index)
		{
			if (currNode->prev == NULL)
			{
				*head = currNode->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				currNode->prev->next = currNode->next;
				if (currNode->next != NULL)
					currNode->next->prev = currNode->prev;
			}

			free(currNode);
			return (1);
		}
		currNode = currNode->next;
		i++;
	}
	return (-1);
}
