#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int u;
	int v;

	for (u = 0 ; u < 24 ; u++)
	{
		for (v = 0 ; v < 60 ; v++)
		{
			_putchar(u / 10 + '0');
			_putchar(u % 10 + '0');
			_putchar(':');
			_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
			_putchar('\n');
		}
	}
}
