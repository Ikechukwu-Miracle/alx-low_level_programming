#include "main.h"
/**
 * binary_to_uint - converts binary numbers
 * to decimal numbers
 * @b: pointer to string containing binary
 *
 * Return: decimal value or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decNum = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decNum = 2 * decNum + (b[i] - '0');
	}

	return (decNum);
}
