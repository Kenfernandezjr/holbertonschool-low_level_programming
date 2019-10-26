#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function for variadic tables.
 * @n: unsigned integer for the numbers being multipled.
 * Return:- Sum of the all numbers in int n.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}

	va_end(valist);

	return (sum);
}
