#include "holberton.h"


/**
 * print_most_numbers - check the code for Holberton School students.
 *
 */

void more_numbers(void)
{
	int c;
	int d;

	c = 0;

	while (c < 10)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
		}

		_putchar('\n');
		c++;
	}
}
