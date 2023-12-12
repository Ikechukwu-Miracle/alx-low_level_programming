#include "search_algos.h"

/**
* binary_search - searches for a value from an array using
* the binary search algoritm
* @array: pointer to the array to be searched
* @size: size of the array
* @value: value being searched for
* Return: the index where the value is located or -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] == value)
			return ((int)mid);
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}
