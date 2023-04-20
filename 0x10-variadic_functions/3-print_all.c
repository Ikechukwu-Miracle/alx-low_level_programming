#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all arguments of all types
 * @format: determines the format of parameter
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *s, *sept = "";
	va_list elem;

	va_start(elem, format);

	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sept, va_arg(elem, int));
					break;
				case 'i':
					printf("%s%d", sept, va_arg(elem, int));
					break;
				case 'f':
					printf("%s%f", sept, va_arg(elem, double));
					break;
				case 's':
					s = va_arg(elem, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", sept, s);
					break;
				default:
					i++;
					continue;
			}
			sept = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(elem);
}
