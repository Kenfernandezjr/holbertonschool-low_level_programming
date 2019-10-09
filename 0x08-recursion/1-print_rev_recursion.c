#include "holberton.h"

/**
 * _print_rev_recursion - function to use recursion.
 *
 * @s: - holds the string Betty Holberton.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
