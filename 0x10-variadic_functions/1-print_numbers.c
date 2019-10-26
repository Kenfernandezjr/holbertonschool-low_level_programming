#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_numbers - functions.
 * @separator: char for blank spaces.
 * @n: unsigned int n is the parameter.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
		printf("%d", va_arg(valist, unsigned int));
	}
	va_end(valist);

	printf("\n");
}
