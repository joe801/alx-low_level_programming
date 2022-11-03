#include "main.h"
/**
 * puts_half - prints the second half of a string
 *
 * @str: string to print from
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
		n = len / 2;
	else
		n = (len - 1) / 2;
	n++;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
