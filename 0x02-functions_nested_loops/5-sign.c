#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: type int
 *
 * Description: pprint if number is positive or negative
 * Return: 0, 1 or -1 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
