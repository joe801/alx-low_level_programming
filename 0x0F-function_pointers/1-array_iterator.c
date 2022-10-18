#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes function for each element of array
 *
 * @array: array for function execution
 * @size: size of array
 * @action: function to execute on element of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{	
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
