#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	size_t counter;

	if (array == NULL)
	{
		return (-1);
	}


	for (counter = 0 ; counter < size ; counter++)
	{
		printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
		{
			return (counter);
		}
	}
	return (-1);
}
