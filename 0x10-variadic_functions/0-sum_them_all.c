#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - variadic functions that sums its parameters
 * @n: number of variable parameters passed
 *
 * Return:0 if n = 0 otherwise sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list values;

	if (n == 0)
		return (0);

	va_start(values, n);

	for (i = 0 ; i < n ; i++)
	{
		result += va_arg(values, int);
	}
	va_end(values);

	return (result);
}
