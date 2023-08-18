#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a doubly
 * linked list
 * @head: points to the pointer to the first node in the list
 * @n: integer value of new node
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	else
		*head = newNode;
	newNode->prev = temp;

	return (newNode);
}
