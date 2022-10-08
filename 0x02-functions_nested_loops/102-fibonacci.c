#include "main.h"
#include <stdio.h>
/**
 * main - printing first 50 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long int j, k, next;

	i = 1;
	j = 0;
	k = 1;
	next = j + k;
	printf("%ld", next);
	while (i < 50)
	{
		j = k;
		k = next;
		next = j + k;
		printf(", %ld", next);
		i++;
	}
	printf("\n");
	return (0);
}
