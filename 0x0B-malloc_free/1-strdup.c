#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy string with memory from malloc
 *
 * @str: string to copy
 *
 * Return: copy of str
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
