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
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL || len == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
