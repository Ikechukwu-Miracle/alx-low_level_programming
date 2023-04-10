#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds the arguments
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
