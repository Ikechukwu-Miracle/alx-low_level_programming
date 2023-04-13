#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: area to be filled
 * @b: char to copy
 * @n: times to copy char
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		s[x] = b;
	return (s);
}
/**
 * _calloc - allocates memory for arrays
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
