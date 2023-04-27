#ifndef LIST_H
#define LIST_H

/**
 * list_a - linked list type
 * @str: string
 * @len: number of nodes
 * @next: pointer to next node
 */
typedef struct list_a
{
	char *str;
	unsigned int len;
	struct list_a *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);


#endif
