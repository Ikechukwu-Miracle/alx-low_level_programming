#include "main.h"
/**
 * _memset - is a funtion that fills memory with constant byte
 * @s: pointer to a string
 * @b: the constant byte value
 * @n: number of bytes of memory
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
