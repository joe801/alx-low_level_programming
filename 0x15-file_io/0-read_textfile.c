#include "main.h"
/**
 * read_textfile - read a text file and prints to posix standard output
 *
 * @filename: name of file to open and read
 * @letters: number of letters to read and print
 *
 * Return: 0 or number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);
	while (buf[i] != '\0')
	{
		_putchar(buf[i]);
		i++;
	}
	free(buf);
	return (i);
}
