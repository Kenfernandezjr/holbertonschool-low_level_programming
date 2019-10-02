#include "holberton.h"

/**
 * puts_half - Function for this project.
 *
 * @str: it holds all place holders the string.
 */

void puts_half(char *str)
{
	int i;

	int j;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			j = i / 2;
		}

		else
		{
		j = (i + 1) / 2;
		}
	}
	for ( ; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
