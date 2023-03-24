#include "main.h"
/**
 * print_diagonal - prints diagonals
 * @n: parameter of the function
 * Return: always 0
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0 ; c < n ; c++)
		{
			for (d = 0 ; d < c ; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
