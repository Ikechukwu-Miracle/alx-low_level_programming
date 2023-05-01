#include "lists.h"
/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the linked list
 *
 * Return: pointer to the head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;

	return (*head);
}
