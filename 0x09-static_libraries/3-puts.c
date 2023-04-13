#include "main.h"
/**
 * _puts - prints a given string with newline
 * @str: the string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
