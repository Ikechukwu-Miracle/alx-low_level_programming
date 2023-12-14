#include "search_algos.h"

/**
* binarySearch - searches for a value from an array using
* the binary search algoritm
* @array: pointer to the array to be searched
* @left: starting index of the array
* @right: ending index of the array
* @value: value being searched for
* Return: the index where the value is located or -1 on failure
*/
int binarySearch(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);


	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}

/**
* exponential_search - implements the exponential search algorithm
* @array: pointer to the array
* @size: size of the array
* @value: value searched for in the array
* Return: the index of the value in the array or -1 on failure
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left = 0, right = size - 1;
	int result;

	if (array[0] != value)
	{
		while (i < size && array[i] <= value)
		{
			if (array[i] == value)
				return ((int)i);

			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			left = i;
			i *= 2;
		}
		right = i < size ? i : size - 1;

		printf("Value found between indexes [%ld] and [%ld]\n", left, right);
		result = binarySearch(array, left, right, value);
		return (result);
		}
		return (0);
}
