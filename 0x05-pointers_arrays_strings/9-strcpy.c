#include "main.h"
/**
 * _strcpy - copies from pointer to another pointer
 *
 * @dest: pointer to copy to
 * @src: pointer to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, count = 0;

	while (src[count] != '\0')
		count++;
	count++;
	while (i < count)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
