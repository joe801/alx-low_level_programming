#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all given argument
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, x;

	if (n > 0)
	{
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			sum += x;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
