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
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
