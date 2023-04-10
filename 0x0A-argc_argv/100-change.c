#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of
 * coins to make change for a sum of money
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, n, change;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	change = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < 5 && n >= 0 ; i++)
	{
		while (n >= cents[i])
		{
			change++;
			n -= cents[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
