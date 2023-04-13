#include "main.h"
/**
 * _strspn -  gets the length of a prefix string
 * @s: pointer to string
 * @accept: pointer to string
 * Return: val
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int val = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (*s == accept[i])
			{
				val++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (val);
		}
		s++;
	}
	return (val);
}
