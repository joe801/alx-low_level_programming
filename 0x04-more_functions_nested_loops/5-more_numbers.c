#include "main.h"
/**
 * more_numbers - Entry point
 *
 * prints numbers 1 to 14 10 times
 *
 * Return: Void (success)
 */

void more_numbers(void)
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
