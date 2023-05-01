#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at position idx
 * @head: pointer to pointer to linked list
 * @idx: index where node is inserted
 * @n: value of new node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}

	for (i = 0 ; i < idx - 1 ; i++)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);

	newNode->next = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
