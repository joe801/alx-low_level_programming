#include "main.h"
/**
 * print_diagonal - print a diagonal for n number of times
 *
 * @n: number of times to print line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 1, j;

	if (n > 0)
	{
		while (i <= n)
		{
			j = 1;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
