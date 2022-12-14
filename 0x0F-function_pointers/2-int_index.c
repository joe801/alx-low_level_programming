#include "function_pointers.h"
/**
 * int_index - searches for integer in array
 *
 * @array: array to search for integer
 * @size: size of array
 * @cmp: pointer to function that searches for integer
 *
 * Return: index of integer in array or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
