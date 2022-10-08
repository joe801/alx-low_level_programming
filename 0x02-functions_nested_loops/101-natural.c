#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * prints sum of all numbers from 1 to 1024 that are multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
