#include "main.h"

/**
 * reverse_array - entry point
 *
 * compares 2 string for greater, lesser or equal
 *
 * @s1: first char for comparison
 * @s2: second char for comparison
 *
 * Return: j
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;
	int b[100];

	while (j < n)
	{
		b[j] = a[j];
		j++;
	}
	while (i < n)
	{
		if (i < (n / 2))
		{
			a[i] = a[n - (i + 1)];
		}
		else
		{
			a[i] = b[n - (i +1)];
		}
		i++;
	}
}
