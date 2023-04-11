#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a new duplicate string
 * @str: pointer to source string
 * Return: dest
 */

char *_strdup(char *str)
{
	char *dest;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);

	for (j = 0 ; str[j] ; j++)
		dest[j] = str[j];

	return (dest);
}
