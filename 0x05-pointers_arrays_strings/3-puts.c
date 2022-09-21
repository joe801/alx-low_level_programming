#include "main.h"

/**
 * swap_int - entry point
 *
 * swap value of pointer a and b
 *
 * @a: pointer int
 * @b: pointer int
 *
 * Return: void (success).
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
