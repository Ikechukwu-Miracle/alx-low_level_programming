#include "main.h"

/**
 * error_exit - prints error mesage to stderr and exits
 * @message: the printed error message
 * @filename: name of file
 * @exit_code: error code
 * Return: void
 */
void error_exit(const char *message, char *filename, int exit_code)
{
	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "%s\n", message);
		exit(exit_code);
	}

	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - copies from one file to another
 * @argc: argument count
 * @argv: arguments to program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	char buff[1024];
	ssize_t val_read, written;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", NULL, 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_from = close(fd_from);
		error_exit("Error: Can't write to", argv[2], 99);
	}
	while ((val_read = read(fd_from, buff, sizeof(buff))) > 0)
	{
		written = write(fd_to, buff, val_read);
		if (written == -1)
		{
			close_from = close(fd_from);
			close_to = close(fd_to);
			error_exit("Error: Can't write to", argv[2], 99);
		}
	}
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
