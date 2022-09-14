#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: type int
 *
 * Description: to check if parameter is an alphabet or a number
 * Return: 1 (True) or 0 (False)
 */

int _isalpha(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
