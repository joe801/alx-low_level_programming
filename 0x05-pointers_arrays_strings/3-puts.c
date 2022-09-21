#include "main.h"

/**
 * _puts - entry point
 *
 * prints out characters in string
 *
 * @str: pointer char
 *
 * Return: void (success).
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
