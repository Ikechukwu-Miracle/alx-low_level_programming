#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: count for arguments
 * @argv: array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
