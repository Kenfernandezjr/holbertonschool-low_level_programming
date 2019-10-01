#include "holberton.h"


/**
 * print_rev - Function to start this project.
 * @s: str is the phrase that needed to be printed backwards.
 * Return: Void/Null.
 */

void print_rev(char *s)
{
 	char c;

	c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	s--;
	for (; c >= 0; c--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
