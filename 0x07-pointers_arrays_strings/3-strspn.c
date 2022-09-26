#include "main.h"
/**
 * _strspn - gets length of prefix substring
 *
 * @s: string to be scanned
 * @accept: string to match
 *
 * Return: length of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k + 1);
}
