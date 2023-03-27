#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: The pointer to the string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
