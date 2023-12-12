#include "search_algos.h"

/**
* linear_search - uses linear search algorithm to find value in array
* @array: Pointer to the array to be searched
* @size: size of array
* @value: Value to search for in the array
* Return: The index in thea array where value is found or -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
            return ((int)i);
        }
        printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
    }

    return (-1);
}
