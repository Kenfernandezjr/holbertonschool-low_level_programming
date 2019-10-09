#include "holberton.h"

/**
 * factorial - function for this project.
 *
 * @n: the number for factorial output.
 *
 * Return: - 1  and -1 if all else.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
