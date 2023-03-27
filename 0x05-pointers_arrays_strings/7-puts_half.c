#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int length;

	while (str[i] != '\0')
		i++;
	length = i;
	if (length % 2 == 0)
	{
		for (i = length / 2 ; i <= length ; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length - 1) / 2 ; i <= length ; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
