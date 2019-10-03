#include "holberton.h"

/**
 * *_strcat - function being used for project 0.
 *
 * @dest: is the char 1.
 *
 * @src: is the char 2.
 *
 * Return: - zero/NULL.
 */

char *_strcat(char *dest, char *src)
{
	int ctr;
	int i;

	for (ctr = 0; dest[ctr]; ctr++)
	{
	}
	for (i = 0; dest[i]; i++)
	{
		dest[i + ctr] = src[i];
	}
	return (dest);
}
