#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings passed as parameters
 * @separator: string between printed string
 * @n: number of strings to be printed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *string;
	va_list stringlists;

	va_start(stringlists, n);

	for (x = 0 ; x < n ; x++)
	{
		string = va_arg(stringlists, char*);

		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(stringlists);
}
