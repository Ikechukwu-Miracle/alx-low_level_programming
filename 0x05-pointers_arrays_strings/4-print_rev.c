#include "main.h"
/**
 * print_rev - prints a given string in reverse
 * @s: the string that is printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	for (i = length ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
