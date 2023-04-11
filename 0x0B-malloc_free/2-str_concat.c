#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: NULL if unsuccessful con if successful
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;

	con = malloc(sizeof(char) * (a + b + 1));
	if (con == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		con[a] = s1[a];
		a++;
	}

	b = 0;
	while (s2[b] != '\0')
	{
		con[a] = s2[b];
		a++;
		b++;
	}
	con[a] = '\0';
	return (con);
}
