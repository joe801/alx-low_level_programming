#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * prints 24 hours
 *
 * Return: Void (success)
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 51)
	{
		j = 48;
		while (j < 52)
		{
			k = 48;
			while (k < 54)
			{
				l = 48;
				while (l < 58)
				{
					if (i > 50 && j > 52)
						break;
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
