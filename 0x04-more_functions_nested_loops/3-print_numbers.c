#include "main.h"

/**
 * print_numbers - Entry point
 *
 * prints numbers from 0 - 9
 *
 * Return: Void (success)
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
