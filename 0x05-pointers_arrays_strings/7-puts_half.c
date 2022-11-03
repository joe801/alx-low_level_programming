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
	n = len;
	if (n % 2 != 0)
		n = n - 1;
	i = n / 2;
	while (i <= n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
