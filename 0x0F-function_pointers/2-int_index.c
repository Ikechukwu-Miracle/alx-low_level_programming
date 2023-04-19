#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to search function
 * Return: index of array element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}
	return (-1);
}
