#include "main.h"
/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer to replace
 * @b: char bytes to replace with
 * @n: unsigned int (number of byte replacement)
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
