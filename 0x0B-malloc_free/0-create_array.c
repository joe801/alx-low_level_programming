#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of char and initialize with specifi char
 *
 * @size: size of array
 * @c: arrray to return
 *
 * Return: array of characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(c) * size);
	if (s == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
