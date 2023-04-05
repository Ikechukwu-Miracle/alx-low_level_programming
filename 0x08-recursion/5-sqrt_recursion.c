#include "main.h"

int natSqrt(int, int);
/**
 * _sqrt_recursion - gets the natural
 * square root of a number
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natSqrt(n, 1));
}
/**
 * natSqrt - gets the natural square root
 * @n: the number
 * @i: iterative value
 * Return: sqaure root of n
 */

int natSqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (natSqrt(n, i + 1));
}
