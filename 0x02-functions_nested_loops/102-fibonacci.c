#include <stdio.h>
/**
 * main - program prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum;
	int i;

	for (i = 1 ; i <= 50 ; i++)
	{
		printf("%ld", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}

