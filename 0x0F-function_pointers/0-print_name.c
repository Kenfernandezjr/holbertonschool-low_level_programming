#include "function_pointers.h"

/**
 * print_name - function.
 * @name:- pointer to help print.
 * @f:- is the function pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
