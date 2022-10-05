#include "main.h"
/**
 * main - prints number of program arguments
 *
 * @argc: number of arguments passed with program
 * @argv: array of arguments passed with program
 *
 * Return: 0 success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
