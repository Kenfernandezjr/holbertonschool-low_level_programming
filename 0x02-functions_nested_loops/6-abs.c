#include "holberton.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: the int
 *
 * Return: absolute value of an int
 */

int _abs(int i)
{
	return (i < 0 ? -i : i);
}
