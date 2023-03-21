#include "main.h"
/**
 * _abs - prints theabsolute value of an integer
 * @m: parameter of the function
 * Return: the value of m
 */

int _abs(int m)
{
	if (m < 0)
		m = -(m);
	else
		m = m;
	return (m);
}
