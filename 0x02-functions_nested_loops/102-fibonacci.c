#include <stdio.h>
/**
 * main - program prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int sum;
	int i;

	for (i = 1 ; i <= 50 ; i++)
	{
		printf("%d", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}

