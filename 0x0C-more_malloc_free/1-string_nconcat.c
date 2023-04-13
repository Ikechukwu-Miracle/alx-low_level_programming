#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: size of string
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	len1 = 0;
	while (s1 && s1[len1])
		len1++;

	len2 = 0;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!str)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
