#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: number of args
 * @av: pointer to args
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] ; y++)
			len++;
	}
	len += ac;

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] ; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		if (s[z] == '\0')
			s[z++] = '\n';
	}
	return (s);
}
