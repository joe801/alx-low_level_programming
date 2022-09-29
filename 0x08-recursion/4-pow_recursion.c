#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power y
 *
 * @x: int to be raised
 * @y: power
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (x && y < 0)
	{
		return (-1);
	}
	else if (x && y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
