#include "main.h"
/**
 * _isdigit - checks for numbers
 * @c: the number being checked
 * Return: digit
 */

int _isdigit(int c)
{
	int digit;

	if (c >= 48 && c <= 57)
		digit = 1;
	else
		digit = 0;

	return (digit);
}
