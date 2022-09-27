#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sum of 2d array
 *
 * @a: pointer array
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, diag_a = 0, diag_b = 0;

	i = 0;
	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
			diag_a += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			diag_b += a[i];
		i++;
	}
	printf("%d, %d\n", diag_a, diag_b);
}
