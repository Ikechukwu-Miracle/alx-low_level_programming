#include "lists.h"
/**
 * get_nodeint_at_index - returns pointer a node at index
 * @head: pointer to linked list
 * @index: index of node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp->next == NULL)
		return (NULL);

	return (tmp);
}
