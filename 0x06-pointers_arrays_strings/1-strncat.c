#include "main.h"

/**
 * _strncat - entry point
 *
 * concatenates two strings
 *
 * @dest: pointer char
 * @src: pointer src
 * @n: at most byte to use for src. type int
 *
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		dest[count] = src[count2];
		if (src[count2] == '\0')
		{
			break;
		}
		count++;
		count2++;
	}
	return (dest);
}
