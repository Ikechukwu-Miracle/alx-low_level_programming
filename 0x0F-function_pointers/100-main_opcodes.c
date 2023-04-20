#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int numBytes, i;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg = (char *)main;

	for (i = 0; i < numBytes; i++)
	{
		if (i == numBytes - 1)
		{
			printf("%02hhx\n", arg[i]);
			break;
		}
		printf("%02hhx ", arg[i]);
	}
	return (0);
}
