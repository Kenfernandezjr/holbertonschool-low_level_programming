#include "holberton.h"

/**
 * *_memcpy - function used to copy src to dest.
 * @dest: is the a first pointer.
 * @src: the second pointer.
 * @n: that declares the number or parameters.
 * Return: - dest for output of src copying to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];

	}
	return (dest);
}
