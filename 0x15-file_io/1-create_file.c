#include "main.h"

/**
 * create_file - creates a new file and writes to it
 * @filename: name of the file to be created
 * @text_content: null terminated syrin written to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written, length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	written = write(fd, text_content, length);

	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}
