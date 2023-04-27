#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node to the end of a list
 * @head: pointer to pointer of linked list
 * @str: string copied to new node
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newE, *temp = *head;
	unsigned int n = 0;

	while (str[n])
		n++;
	newE = malloc(sizeof(list_t));
	if (!newE)
		return (NULL);

	newE->str = strdup(str);
	newE->len = n;
	newE->next = NULL;

	if (*head == NULL)
	{
		*head = newE;
		return (newE);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newE;
	return (newE);
}
