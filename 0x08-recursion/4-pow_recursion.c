#include "holberton.h"

/**
 * _pow_recursion - function for this project.
 *
 * @x: the value.
 *
 * @y: to be used as the power number.
 *
 * Return: - 1  and -1 if all else.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
