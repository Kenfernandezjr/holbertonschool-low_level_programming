#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: is the inter used for the lines length.
 * Return: Always 0.
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
