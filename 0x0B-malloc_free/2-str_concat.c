#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, a = 0, b = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}
	while (b >= 0)
	{
		s[a] = s2[b];
		if (s2[b] == '\0')
			break;
		a++;
		b++;
	}
	return (s);
}
