#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * the read data to stdout
 * @filename: the path of the file to be read
 * @letters: no of characters expected to read and write
 *
 * Return: the actual characters read or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t valuesRead, valWritten, fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	valuesRead = read(fd, buffer, letters);
	valWritten = write(STDOUT_FILENO, buffer, valuesRead);

	if (valWritten == -1 || valWritten != valuesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (valWritten);
}
