#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void puts2(char *str)
{

	for ( ; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
