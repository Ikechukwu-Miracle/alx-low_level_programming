#include "lists.h"

/**
 * pop_listint - deletes the head node of the lidt
 * @head: pointer to the list.
 * Return: data n of the deleted node
 */
int pop_listint(listint_t **head)
{
	int nVal;
	listint_t *tmp = *head;

	if (!*head || !head)
		return (0);

	nVal = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (nVal);
}
