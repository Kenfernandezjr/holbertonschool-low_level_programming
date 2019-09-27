#include "holberton.h"

/**
 * print_square - draws a sqaure in the terminal.
 * @size: size of square
 * Return: nothing
 **/

void print_square(int size)
{
	if (size > 0)
	{
		int c;
		int d;

		d  = 0;

		while (d < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			d++;
		}
	}
	else
		_putchar('\n');
}
