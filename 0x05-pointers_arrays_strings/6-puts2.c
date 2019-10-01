#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *
 * @str: it holds all place holders the string.
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	i = 0

	for ( ; *str != '\0'; str += 2)
	{
		i++;
		_putchar(*str);
	}
	_putchar('\n');
}