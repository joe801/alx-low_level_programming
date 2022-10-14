#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints c types
 *
 * @format: list of type of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int j = 0, l = 0;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[l] != '\0')
		l++;
	while (j < l)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
			printf("%s", s);
			break;
		}
		if (j < l - 1 && (format[j] == 'f' || format[j] == 'c' || format[j] == 'i' || format[j] == 's'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
