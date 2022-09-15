#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @i: type int
 *
 * Description: returns last digit
 * Return: last digit (success)
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
