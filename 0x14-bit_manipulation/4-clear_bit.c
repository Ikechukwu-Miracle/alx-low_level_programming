#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at index
 * in a decimal number
 * @n: pointer to decimal number
 * @index: location of bit
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ~(1UL << index) & *n;

	return (1);
}
