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
	int fd;
	ssize_t _read, _write;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return(0);
	_read = read(fd, buf, letters);
	_write = write(STDOUT_FILENO, buf, _read);
	close(fd);
	free(buf);
	return (_write);
}
