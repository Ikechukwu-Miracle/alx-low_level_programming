#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds the arguments
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *g;

	for (i = 1 ; i < argc ; i++)
	{
		g = argv[i];
		for (j = 0 ; g[j] != '\0' ; j++)
		{
			if (!isdigit(g[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (argc == 1)
			printf("0\n");
		sum += atoi(g);
	}
	printf("%d\n", sum);

	return (0);
}
