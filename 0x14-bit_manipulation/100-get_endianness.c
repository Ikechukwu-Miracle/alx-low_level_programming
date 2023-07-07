#include "main.h"
/**
 * get_endianness - checks the endianness of a machine
 *
 * Return: 0 if big endian and 1 otherwise
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *ch;

	ch = (char *) &x;

	return (*ch);
}
