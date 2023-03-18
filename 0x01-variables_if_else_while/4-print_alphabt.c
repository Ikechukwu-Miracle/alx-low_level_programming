#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		if (az != 'q' && az != 'e')
			putchar(az);
	}
	putchar('\n');
	return (0);
}
