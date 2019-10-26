#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_strings - functions for printing strings project.
 * @separator: constant char.
 * @n: unsigned int n.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
		printf("%s", va_arg(valist, char *));
	}
	va_end(valist);

	printf("\n");
}
