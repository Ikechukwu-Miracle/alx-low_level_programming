#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned
 * decimal equivalent
 * @b: string containing binary numbers
 *
 * Return: decimal values of binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decV = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decV = 2 * decV + (b[i] - '0');
	}

	return (decV);
}
