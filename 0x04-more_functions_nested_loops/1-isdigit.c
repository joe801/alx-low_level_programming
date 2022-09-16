#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: type int
 * Description: Checks if input c is an digit or not
 *
 * Return: Always 0 or 1 (success).
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
