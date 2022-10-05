#include "main.h"
/**
 * main - multiply arguments given
 *
 * @argc: number of arguments passed with program
 * @argv: array of arguments passed with program
 *
 * Return: 0 success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, mul = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
