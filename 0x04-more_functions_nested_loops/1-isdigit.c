#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - if it is a number or a letter
 * @c: the int that holds the digit
 * Return: Always 1 if digit or 0 if it is letter
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
