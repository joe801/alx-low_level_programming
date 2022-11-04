#include "main.h"
/**
 * append_text_to_file - appends text to existing file
 *
 * @filename: name to give the created file
 * @text_content: what to write to file
 *
 * Return: 1(success) or -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, _write;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		_write = write(fd, text_content, i);
		if (_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
