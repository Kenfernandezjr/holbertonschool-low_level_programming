#include "holberton.h"

/**
 * _puts - Function to start this project.
 * @str: 
 * Return: Void/Null.
 */

void _puts(char *str)
{

	for (; *str != 0; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
