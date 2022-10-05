#include "main.h"
/**
 * main - prints program name
 *
 * @argc: number of arguments passed with program
 * @argv: array of arguments passed with program
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
