#include "holberton.h"
#include <string.h>

/**
 * _strlen - function to start this project with.
 *
 * @s: is the interger that stores the characters holberton.
 *
 * Return: - Void/Null.
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	for (; *s != 0; s++)
	{
		c++;
	}
	return (c);
}
