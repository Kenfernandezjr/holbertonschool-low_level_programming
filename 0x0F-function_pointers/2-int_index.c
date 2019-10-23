#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function for this project.
 * @array:- integer that holds the number.
 * @size:- size of the string.
 * @cmp:- Function pointer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]))
		{
			return (counter);
		}
	}
	return (-1);
}
