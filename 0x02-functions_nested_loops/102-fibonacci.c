#include "main.h"
#include <stdio.h>
/**
 * main - printing first 50 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main()
{
	int i, j, k, next;

	i = 0;
	j = 0;
	k = 1;
	next = j + k;
	printf("%d", next);
	while (i < 50)
	{
		j = k;
		k = next;
		next = j + k;
		printf(", %d", next);
		i++;
	}
	printf("\n");
	return (0);
}
