#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @c: int to be evaluated
 *
 * Return: last digit of param
 */

int print_last_digit(int c)
{
	int result;

	result = c % 10;

	if (result < 0)
	{
		result *= -1;
	}
	_putchar('0' + result);
	return (result);
}
