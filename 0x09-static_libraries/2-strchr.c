#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the character
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
