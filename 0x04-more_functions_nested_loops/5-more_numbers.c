#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * prints alphabets from a - z 10 times
 *
 * Return: Void (success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
