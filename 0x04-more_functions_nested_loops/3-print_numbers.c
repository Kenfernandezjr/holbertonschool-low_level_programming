#include "holberton.h"
#

/**
 * print_numbers - check the code for Holberton School students.
 * @c: int is numerials
 * _putchar: to print an chr
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
