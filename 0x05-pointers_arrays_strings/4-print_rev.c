#include "main.h"

/**
 * print_rev - entry point
 *
 * prints out characters in string in reverse order
 *
 * @s: pointer char
 *
 * Return: void (success).
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
