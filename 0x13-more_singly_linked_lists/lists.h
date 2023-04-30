#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_a - linked list
 * @n: integer variable belonging to list
 * @next: pointer to next node
 * Description: singly linked list
 */
typedef struct listint_a
{
	int n;
	struct listint_a *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
