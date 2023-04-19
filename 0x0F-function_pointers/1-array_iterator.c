#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array on which function is executed
 * @size: size of the array
 * @action: function pointer to the executing function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0 ; x < size ; x++)
		action(array[x]);
}
