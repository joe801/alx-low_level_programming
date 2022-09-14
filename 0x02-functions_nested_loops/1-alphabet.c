#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * prints alphabets from a - z
 *
 * Return: Void (success)
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
