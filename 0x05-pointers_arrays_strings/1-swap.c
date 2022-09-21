#include "main.h"

/**
 * swap_int - entry point
 *
 * swap value of pointer a and b
 *
 * @a: pointer int
 * @b: pointer int
 *
 * Return: void (success).
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
