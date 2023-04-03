#include "main.h"
/**
 * _memcpy - copies copies memory area
 * @dest: pointer to the destination string
 * @src: pointer to source sting
 * @n: number of required memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
