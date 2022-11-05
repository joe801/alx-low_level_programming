#include "main.h"
#include <stdio.h>
/**
 * _error - checks if files can be open
 *
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @av: argument vector
 *
 * Return: void
 */

void _error(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - entry point
 *
 * @ac: number of arguments
 * @av: pointer to arguments
 *
 * Return: 0 always
 */

int main(int ac, char **av)
{
	int file_to, file_from, err_close;
	char buf[1024];
	ssize_t i, _write;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO,"%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_from = open(av[1], O_RDONLY);
	_error(file_from, file_to, av);
	i = 1024;
	while (i == 1024)
	{
		i = read(file_from, buf, 1024);
		if (i == -1)
			_error(-1, 0, av);
		_write = write(file_to, buf, i);
		if (_write == -1)
			_error(0, -1, av);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
