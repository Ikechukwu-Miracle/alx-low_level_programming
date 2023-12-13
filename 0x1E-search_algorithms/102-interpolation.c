#include "search_algos.h"

/**
* interpolation_search - searches for a value from an array using
* the interpolation search algoritm
* @array: pointer to the array to be searched
* @size: size of the array
* @value: value being searched for
* Return: the index where the value is located or -1 on failure
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		pos = left + (((double)(right - left) / (array[right] - array[left])) *
				(value - array[left]));

		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else if (pos < size - 1)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			left = pos + 1;
		else if (array[pos] > value)
			right = pos - 1;
	}

	return (-1);
}
