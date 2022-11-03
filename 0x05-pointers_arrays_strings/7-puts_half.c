#include "main.h"
/**
 * puts_half - prints the second half of a string
 *
 * @str: string to print from
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
		len = len - 1;
	i = len / 2;
	n = len - 1;
	while (i <= n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
