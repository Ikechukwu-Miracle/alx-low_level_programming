#include "main.h"
/**
 * flip_bits - counts the number of bits to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, Xnum;
	int i, flipCount = 0;

	Xnum = n ^ m;

	i = 63;
	while (i >= 0)
	{
		num = Xnum >> i;
		if (num & 1)
			flipCount++;
		i--;
	}

	return (flipCount);
}
