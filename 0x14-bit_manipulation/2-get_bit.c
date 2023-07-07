#include "main.h"
/**
* get_bit - returns the value of bit located at an
* index in a decimal number
* @n: the decimal number
* @index: location of the bit
* Return: the value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int index_bit_val;

	if (index > 63)
		return (-1);

	index_bit_val = (n >> index) & 1;

	return (index_bit_val);
}
