#include "main.h"

/**
 * reverse_array - entry point
 *
 * compares 2 string for greater, lesser or equal
 *
 * @a: arrar
 * @n: size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j, mem;

	while (i < (n - 1))
	{
		j = i + 1;
		while (j > 0)
		{
			mem = a[j];
			a[j] = a[j - 1];
			a[j - 1] = mem;
			j--;
		}
		i++;
	}
}
