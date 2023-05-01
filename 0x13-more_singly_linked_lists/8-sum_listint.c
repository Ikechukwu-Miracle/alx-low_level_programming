#include "lists.h"

/**
 * sum_listint - sums the data of a linked list
 * @head: points to the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
