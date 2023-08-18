#include "lists.h"

/**
 * sum_dlistint - returns the sum of a doubly linked list
 * @head: pointer to the first element in the list
 *
 * Return: the sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (temp != NULL)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}
