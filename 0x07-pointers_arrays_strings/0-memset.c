#include "holberton.h"

/**
 * *_memset - is the function being used for this project.
 * @s: is the char being used to start at the first address.
 * @b: the char being used to increment the change in the values.
≈ç * @n: the length of the block of memory.
 * Return: - the value of S.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	for ( ; n > 0; n--)
	{
		*temp = b;

		temp++;
	}
	return (s);
}
