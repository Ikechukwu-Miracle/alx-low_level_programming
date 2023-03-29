#include "main.h"
/**
 * _strncpy - copies the characters of a string
 * @dest: buffer to be copied to
 * @src: the string that is copied
 * @n: number of characters copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
