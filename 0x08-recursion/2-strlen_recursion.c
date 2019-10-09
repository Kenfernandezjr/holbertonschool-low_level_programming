#include "holberton.h"

/**
 * _strlen_recursion - function to use to reverse recursion.
 *
 * @s: - holds the string Colton Walker.
 *
 * Return: - Null/Zero.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
