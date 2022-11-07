#include "main.h"
#include <stdio.h>
/**
 * print_array - prints all elements of an array
 *
 * @a: array to print from
 * @n: number of array elemnts to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
