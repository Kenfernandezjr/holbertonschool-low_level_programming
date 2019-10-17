#include  "holberton.h"
#include <stdlib.h>

/**
 * create_array - function
 *
 * @size: parameter of the work
 *
 * @c: char for using to count the address
 *
 * Return: - the pointer ar
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(ar));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
