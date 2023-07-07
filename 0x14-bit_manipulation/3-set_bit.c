#include "main.h"
/**
 * set_bit - sets the bit value at a particular index
 * to 1 in a decimal number
 * @n: pointer to number
 * @index: location of bit
 * Return: 1 if successful -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1UL << index) | *n;

	return (1);
}
