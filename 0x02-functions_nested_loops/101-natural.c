#include <stdio.h>
/**
 * main - prints the sum of multiples of 3 and 5
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	int sum = 0;

	for (a = 0 ; a <= 1024 ; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
