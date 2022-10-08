#include "main.h"

/**
 * times_table - Prints the n times table
 *
 * @n: n times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, op;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				op = a * b;
				_putchar(44);
				_putchar(32);
				if (op > 99)
				{
					_putchar((op / 100) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}
				else if (op > 9)
				{
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar(op + 48);
				}
			}
			_putchar('\n');
		}
	}
}
