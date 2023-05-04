#include "main.h"

/**
 * print_binary - prints the binary equivalent
 * of a decimal value pass to it
 * @n: the decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int currNum;
	int x, bin_count = 0;

	x = 32;
	while (x >= 0)
	{
		currNum = n >> x;
		if (currNum & 1)
		{
			_putchar('1');
			bin_count++;
		}
		else if (bin_count)
			_putchar('0');
		x--;
	}
	if (!bin_count)
		_putchar('0');
}
