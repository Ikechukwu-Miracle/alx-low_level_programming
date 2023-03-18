#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char aZ;
	char Az;

	for (aZ = 'a' ; aZ <= 'z' ; aZ++)
	{
		putchar(aZ);
	}
	for (Az = 'A' ; Az <= 'Z' ; Az++)
	{
		putchar(Az);
	}
	putchar('\n');

	return (0);
}
