#include "main.h"
/**
 * _strcmp - compares two strings
 *  @s1: points to one of the strings to compare
 *  @s2: points to the second string
 *  Return: 0, positive or negative
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
