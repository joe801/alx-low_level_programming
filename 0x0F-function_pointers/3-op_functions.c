#include "3-calc.h"
/**
 * op_add - adds 2 integer input
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of a / b
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
