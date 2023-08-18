#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at n position
 * @head: pointer to the first element of the list
 * @index: position of the specific node
 *
 * Return: pointer to node at position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (temp)
	{
		if (index == n)
			return (temp);
		n++;
		temp = temp->next;
	}

	return (NULL);
}
