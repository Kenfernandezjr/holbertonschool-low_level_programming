#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - function used for this project.
 * @dest: appended string
 * @src: appended from string
 * Return: string dest is the return, with pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
