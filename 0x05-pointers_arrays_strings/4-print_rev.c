#include "main.h"
/**
 * print_rev - prints a given string in reverse
 * @s: the string that is printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
