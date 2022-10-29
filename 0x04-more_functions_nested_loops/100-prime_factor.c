#include <stdio.h>
/**
 * main - prints prime factors of number
 *
 * Return: void
 */

int main(void)
{
	long int n, prime;

	n = 612852475143;
	for (prime = 2; prime <= n; prime++)
	{
		if (n % prime == 0)
		{
			n /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
