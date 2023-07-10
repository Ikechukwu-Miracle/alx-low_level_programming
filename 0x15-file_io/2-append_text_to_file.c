#include "main.h"

/**
 * append_text_to_file - appends a string to an existing file
 * @filename: name or path of file to which string is appended
 * @text_content: pointer to characters appended to file
 *
 * Return: 1 on sucess and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[length] ;)
			length++;
		written = write(fd, text_content, length);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
