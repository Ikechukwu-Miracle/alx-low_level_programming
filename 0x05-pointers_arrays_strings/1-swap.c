#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: the first parameter of the function
 * @b: the second parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
