#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: type int
 *
 * Description: to check if parameter is a lowercase or not
 * Return: 1 (True) or 0 (False)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
