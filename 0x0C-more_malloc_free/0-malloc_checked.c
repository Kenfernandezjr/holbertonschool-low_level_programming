#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Function for allocating memory.
 *
 * @b: void pointer for allocating memory
 *
 * Return:- returning the pointer allocated memory space.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
