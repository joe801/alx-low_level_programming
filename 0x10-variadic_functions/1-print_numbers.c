#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers in arguments seperated by comma
 *
 * @separator: number seperator (comma)
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int x;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);

}
