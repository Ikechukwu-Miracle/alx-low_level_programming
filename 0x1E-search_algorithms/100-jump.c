#include "search_algos.h"
#include <math.h>

/**
* jump_search - implements the jump search algorithm
* @array: pointer to the array to be searched
* @size: size of the array
* @value: value being searched for
* Return: the index where the value is located or -1 on failure
*/
int jump_search(int *array, size_t size, int value)
{
    size_t i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
    right = sqrt(size);

	if (array[left] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)left, array[left]);
		return ((int)left);
	}

	if (array[left] != value)
		printf("Value checked array[%d] = [%d]\n", (int)left, array[left]);

    while (array[right] < value && left < size - 1)
    {
		printf("Value checked array[%d] = [%d]\n", (int)right, array[right]);
        left = right;
        right += sqrt(size);
        if (right > size - 1)
		{
			if (array[right] >= value)
				printf("Value found between indexes [%ld] and [%ld]\n", left, right);
            right = size;
		}
    }
	if (array[right] >= value && left < size)
	{
		if (right != size - 1)
			printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	}

    for (i = left; i < right; i++)
    {
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
    }

	return (-1);
}
