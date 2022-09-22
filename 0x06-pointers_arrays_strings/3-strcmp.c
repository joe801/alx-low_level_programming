#include "main.h"

/**
 * _strcmp - entry point
 *
 * compares 2 string for greater, lesser or equal
 *
 * @s1: first char for comparison
 * @s2: second char for comparison
 *
 * Return: j
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
