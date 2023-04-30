#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of the linked list
 * @head: pointer to pointer to linked list
 * @n: integer value of new node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
