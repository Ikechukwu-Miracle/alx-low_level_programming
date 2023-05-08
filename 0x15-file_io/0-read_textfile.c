#include "main.h"
/**
 * read_textfile - reads a file and prints to POSIX stdout
 * @filename: pointer to the file to be read
 * @letters: number of letter to read
 *
 * Return: 0 if unsuccessful otherwise number of written letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filp, valread, written;
	char *buffer;

	filp = open(filename, O_RDONLY);

	if (filp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	valread = read(filp, buffer, letters);
	written = write(STDOUT_FILENO, buffer, valread);

	close(filp);
	free(buffer);

	return (written);
}
