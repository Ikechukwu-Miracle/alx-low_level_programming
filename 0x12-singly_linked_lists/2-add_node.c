#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node to the beginning
 * of a linked list
 * @head: pointer to pointer of first element
 * @str: string of new element
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newE;
	unsigned int n = 0;

	while (str[n])
		n++;

	newE = malloc(sizeof(list_t));
	if (!newE)
		return (NULL);

	newE->str = strdup(str);
	newE->len = n;
	newE->next = (*head);
	(*head) = newE;

	return (*head);
}
