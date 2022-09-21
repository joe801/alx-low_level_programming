#include "main.h"
#include <string.h>

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
	int count, len;

	len = strlen(s);
	count = 0;
	while (s[count] != (s[len] + 1))
	{
		_putchar(s[len - count]);
		count++;
	}
	_putchar('\n');
}
