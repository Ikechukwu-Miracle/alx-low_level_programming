#include "main.h"
/**
 * create_file - creates a file with read and write permissions
 * @filename: pointer to file
 * @text_content: content of file
 * Return: -1 on failure and 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int filep, written, strln;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		strln = 0;
		for (; text_content[strln] ;)
			strln++;
	}

	filep = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(filep, text_content, strln);

	if (filep == -1 || written == -1)
		return (-1);

	close(filep);

	return (1);
}

