#include "main.h"
/**
 * _abs - Entry point
 *
 * @i: type int
 *
 * Description: returns absolute valuie
 * Return: absolute value (success)
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
