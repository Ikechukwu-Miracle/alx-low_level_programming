#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: the size of the array
 * @c: character variable
 *
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0 ; x < size ; x++)
		str[x] = c;

	return (str);
}
