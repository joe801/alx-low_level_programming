#include "main.h"

/**
 * _strncpy - entry point
 *
 * concatenates two strings
 *
 * @dest: pointer char
 * @src: pointer src
 * @n: at most byte to use for src. type int
 *
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;


	while (count < n)
	{
		dest[count] = src[count];
		if (src[count] == '\0')
		{
			break;
		}
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
