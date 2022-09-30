#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: type int
 * Description: Checks if input c is an uppercase or not
 *
 * Return: Always 0 or 1 (success).
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
