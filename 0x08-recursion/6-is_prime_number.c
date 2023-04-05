#include "main.h"

int primeNum(int n, int i);
/**
 * is_prime_number - tells if a number is prime
 * @n: the number
 * Return: 1 if prime or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeNum(n, n - 1));
}
/**
 * primeNum - checks for prime number
 * @n: number
 * @i: divisor
 * Return: 1 or 0
 */

int primeNum(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (primeNum(n, i - 1));
}
