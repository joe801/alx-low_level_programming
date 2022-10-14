#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings in arguments seperated by seperator
 *
 * @separator: number seperator (comma)
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);

}
