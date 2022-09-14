#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
