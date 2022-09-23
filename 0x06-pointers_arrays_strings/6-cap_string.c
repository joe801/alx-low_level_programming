#include "main.h"

/**
 * cap_string - entry point
 *
 * converting lowercase to uppercase
 *
 * @s: string input
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int sep[] =  {32, 9, 11, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
