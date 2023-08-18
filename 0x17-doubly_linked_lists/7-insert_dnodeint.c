#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to pointer to the node
 * @idx: position index
 * @n: integer value of new node
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *preNode, *nextNode, *newNode;

	preNode = *h;
	newNode = NULL;

	if (idx == 0)
		newNode = add_dnodeint(h, n);

	while (idx != 0)
	{
		if (idx != 0 && preNode->next == NULL)
			return (NULL);

		preNode = preNode->next;
		idx--;
	}
	if (preNode->next == NULL)
		newNode = add_dnodeint_end(h, n);
	else
	{
		nextNode = preNode->next;
		newNode = malloc(sizeof(dlistint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		preNode->next = newNode;
		nextNode->prev = newNode;
		newNode->prev = preNode;
		newNode->next = nextNode;
	}
	return (newNode);
}
