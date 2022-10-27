#include "main.h"
/**
 * print_triangle - prints triangle accordint to n size
 *
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				if (j <= size - i)
					_putchar(' ');
				else
					_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}

	}
	else
	{
		_putchar('\n');
	}
}
