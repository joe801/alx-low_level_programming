#include "main.h"
/**
 * print_line - draws a line for n number of times
 *
 * @n: number of times to print line
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
