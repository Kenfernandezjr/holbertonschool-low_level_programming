#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *
 * @str: it holds all place holders the string.
 */

void puts2(char *str)
{
	for ( ; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
