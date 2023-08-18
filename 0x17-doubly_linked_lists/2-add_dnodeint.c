#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of doubly
 * linked list
 * @head: points to the pointer of first element of the list
 * @n: integer value of the new node
 *
 * Return: pointer to the newNode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = temp;
		temp->prev = newNode;
		*head = newNode;
	}

	return (newNode);
}
