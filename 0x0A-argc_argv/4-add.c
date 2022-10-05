#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * main - adds arguments given
 *
 * @argc: number of arguments passed with program
 * @argv: array of arguments passed with program
 *
 * Return: 0 success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
