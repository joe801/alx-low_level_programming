#include "main.h"
#include <stdio.h>
/**
 * main - prints sum of even nums of fibonacci 4000000
 *
 * Return: 0 (success)
 */

int main(void)
{
	long int j, k, next, sum;

	j = 0;
	k = 1;
	next = j + k;
	printf("%ld", next);
	while (next <= 4000000)
	{
		j = k;
		k = next;
		next = j + k;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
