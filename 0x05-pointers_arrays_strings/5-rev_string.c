#include "main.h"
/**
 * rev_string - reverses strings
 * @s: pointer to the string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	char rv = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++;
	for (y = 0 ; y < x ; y++)
	{
		x--;
		rv = s[y];
		s[y] = s[x];
		s[x] = rv;
	}
}
