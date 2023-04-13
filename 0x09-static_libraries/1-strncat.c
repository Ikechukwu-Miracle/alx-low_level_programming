#include "main.h"
/**
 * _strncat - appends n characters of a string
 * to another string
 * @dest: the string to be appended to
 * @src: the string that is appended
 * @n: the number of appended characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
