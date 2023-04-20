#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - variadic functions that sums its parameters
 * @n: number of variable parameters passed
 *
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; 
	int result = 0;
	va_list values;

	va_start(values, n);

	for (i = 0 ; i < n ; i++)
	{
		result += va_arg(values, int);
	}
	va_end(values);

	return (result);
}
