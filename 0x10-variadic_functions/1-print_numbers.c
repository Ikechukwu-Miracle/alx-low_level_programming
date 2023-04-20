#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers and a new line
 * @separator: string in between the printed numbers
 * @n: toal numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	if (separator == NULL)
		return;

	va_start(print, n);

	for (i = 1 ; i < n ; i++)
		printf("%d%s", va_arg(print, int), separator);

	if (i == n)
		printf("%d\n", va_arg(print, int));
	va_end(print);
}
