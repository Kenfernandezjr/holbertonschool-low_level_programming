#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *
 * @str: it holds all place holders the string.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)

			_putchar(str[i]);
	}
	_putchar('\n');
}
