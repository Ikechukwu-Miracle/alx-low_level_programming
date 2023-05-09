#include "main.h"

char *allocate_buff(char *);
void file_closer(int);
/**
 * main - copies content of a file to another file
 * @argc: counts number of command line args
 * @argv: vector containing arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int inputFileDesc, bytes, outputFileDesc;
	char *buffr;
	int written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffr = allocate_buff(argv[2]);
	inputFileDesc = open(argv[1], O_RDONLY);
	bytes = read(inputFileDesc, buffr, 1024);
	outputFileDesc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (bytes > 0)
	{
		if (inputFileDesc == -1 || bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffr);
			exit(98);
		}
		written = write(outputFileDesc, buffr, bytes);

		if (outputFileDesc == -1 || written == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffr);
			exit(99);
		}
		bytes = read(inputFileDesc, buffr, 1024);
		outputFileDesc = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffr);
	file_closer(inputFileDesc);
	file_closer(outputFileDesc);

	return (0);
}

/**
 * allocate_buff - allocates memory dynamically
 * @filename: pointer to the file which memory
 * is allocated to
 *
 * Return: pointer to the allocated memory
 */
char *allocate_buff(char *filename)
{
	char *buff = malloc(sizeof(char) * 1024);

	if (!buff)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}
/**
 * file_closer - closes files that have been opened
 * @fd: file discriptor of file to be closed
 *
 * Return: void
 */
void file_closer(int fd)
{
	int res = close(fd);

	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
