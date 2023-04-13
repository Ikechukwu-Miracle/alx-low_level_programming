#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: character being checked
 * Return: upper
 */

int _isupper(int c)
{
	int upper;

	if (c >= 65 && c <= 90)
		upper = 1;
	else
		upper = 0;

	return (upper);
}
