#include "main.h"
/**
 * print_line - prints a line
 * @n: The value that determines length of the line
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
