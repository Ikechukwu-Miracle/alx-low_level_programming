#include "main.h"
/**
 * _islower - shows wether a character is lower case
 *
 * @c: parameter of the function
 * Return: 0 if lowercase and 1 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
