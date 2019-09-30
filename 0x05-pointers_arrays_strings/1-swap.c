#include "holberton.h"

/**
 * swap_int - Function that we will be working in for this exercise.
 *
 * @a: is the interger to use for swapping.
 *
 * @b: is the second interger to use for swapping.
 *
 * Return: - Void/Null.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
