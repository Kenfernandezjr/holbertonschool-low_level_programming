#include "holberton.h"

/**
 * check_sqrt - helper function.
 *
 * @i: integer that helps with equation for sqrt.
 *
 * Return: - helper and i + 1 so it can increment.
 */

int check_sqrt(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (check_sqrt (n, i + 1));
}
/**
 * _sqrt_recursion - Function for the project.
 *
 * @n: is the number returned of the squareroot.
 *
 * Return:- Helper function and squareroot.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_sqrt (n, 1));
}
