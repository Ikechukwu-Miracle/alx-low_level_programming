#include "main.h"
/**
 * _strpbrk - searches for a set of characters
 * on in a given string
 * @s: points to the string that is searched
 * @accept: points to the set of characters
 * Return: s if found or NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0 ; accept[m] != '\0' ; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
