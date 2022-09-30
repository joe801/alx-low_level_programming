#include "main.h"
/**
 * _strpbrk - searches a string for anoy of a set of bytes
 *
 * @s: character to search from
 * @accept: string containing characters to match
 *
 * Return: matches or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
