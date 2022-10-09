#include "main.h"
/**
 * print_square - print square of n size
 *
 * @size: size of square to print
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
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
