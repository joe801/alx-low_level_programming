#include "main.h"
#include <stdio.h>
/**
 * main - prints sum of even nums of fibonacci 4000000
 *
 * Return: 0 (success)
 */

int main(void)
{
	int sum;
	long int j, k, next;

	j = 1;
	sum = 0;
	k = 1;
	next = 0;
	while (next <= 4000000)
	{
		next = j + k;
		j = k;
		k = next;
		if ((next % 2) == 0)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);
	return (0);
}
