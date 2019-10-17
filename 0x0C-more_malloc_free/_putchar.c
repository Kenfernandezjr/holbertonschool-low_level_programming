#include "holberton.h"

/**
 * _print_rev_recursion - function to use to reverse recursion.
 *
 * @s: - holds the string Colton Walker.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
