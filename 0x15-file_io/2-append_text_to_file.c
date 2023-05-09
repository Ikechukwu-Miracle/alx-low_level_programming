#include "main.h"
/**
 * append_text_to_file - appends data to a file
 * @filename: points to the file to append
 * @text_content: string to append to file
 * Return: -1  if unsuccessful and 1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filep, written, strln = 0;

	if (filename != NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strln = 0 ; text_content[strln] ;)
			strln++;
	}

	filep = open(filename, O_WRONLY | O_APPEND);
	written = write(filep, text_content, strln);

	if (filep == -1 || written == -1)
		return (-1);

	close(filep);

	return (1);
}
