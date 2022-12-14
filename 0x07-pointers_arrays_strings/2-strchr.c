#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: character to search from
 * @c: char to locate
 *
 * Return: c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
