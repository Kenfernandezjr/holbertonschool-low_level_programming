#include "holberton.h"

/**
 * _prime_calc - Helper function used for this project.
 *
 * @n: - integer for checkin number.
 *
 * @i: - integer for checkin against the number.
 *
 * Return: - n and i + 1.
 */

int _prime_calc(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	return (_prime_calc(n, i + 1));
}

/**
 * is_prime_number - funtion for the project.
 *
 * @n: - integer for prime project.
 *
 * Return: - _prime_cale to go back through helper function.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (_prime_calc(n, 2));
}
