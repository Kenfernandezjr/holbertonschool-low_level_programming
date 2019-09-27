#include "holberton.h"

/**
 *  print_diagonal - check the code for Holberton School students.
 * @n: is the inter to check the length.
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int c;
	int d;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else

	_putchar('\n');
}
