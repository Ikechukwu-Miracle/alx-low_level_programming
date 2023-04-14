#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: poiyer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	p = malloc(sizeof(int) * n);

	if (p == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		p[i] = min++;

	return (p);
}
