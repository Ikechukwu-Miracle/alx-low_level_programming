#include "main.h"
/**
 * reverse_array - reverses the elements of an array
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0 ; i < n-- ; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
