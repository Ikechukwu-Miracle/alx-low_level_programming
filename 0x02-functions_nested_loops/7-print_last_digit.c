#include "main.h"
/**
 * print_last_digit - shows the last digit a number
 * @a: parameter of the function
 * Return: value of a
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -(b);
	_putchar(b + '0');
	return (b);
}
