#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - function for this project.
 * @array: int array used for the elements.
 * @size: used for the parameter.
 * @action: function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
