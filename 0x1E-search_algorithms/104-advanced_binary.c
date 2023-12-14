#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int index, result;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	index = (size - 1) / 2;
	if (array[index] == value)
	{
		if (index > 0 && array[index - 1] == value)
			return (advanced_binary(array, index + 1, value));
		else
			return (index);
	}
	else if (array[index] < value)
	{
		result = advanced_binary(array + index + 1, size -
			index - 1, value);
		if (result != -1)
			return (result + index + 1);
	}
	else
	{
		return (advanced_binary(array, index, value));
	}

	return (-1);
}
