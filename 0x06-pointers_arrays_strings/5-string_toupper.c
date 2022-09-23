#include "main.h"

/**
 * _strcat - entry point
 *
 * concatenates two strings
 *
 * @dest: pointer char
 * @src: pointer src
 *
 * Return: *dest
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
