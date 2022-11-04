#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: name to give the created file
 * @text_content: what to write to file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, _write;

	while (text_content[i] != '\0')
		i++;
	i++;
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	_write = write(fd, text_content, i);
	if (_write == -1)
		return (-1);
	close(fd);
	return (1);
}
