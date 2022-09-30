#include "main.h"
/**
 * _strstr - searches a string for anoy of a set of bytes
 *
 * @haystack: character to search from
 * @needle: string containing characters to match
 *
 * Return: match first occurence or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return ('\0');
}
