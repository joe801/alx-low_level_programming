#include "main.h"

/**
 * _strlen - entry point
 *
 * return number of characters in a string
 *
 * @s: pointer char
 *
 * Return: count.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
