#include "holberton.h"
#include <stddef.h>

/**
 * *_strchr - function for this project.
 * @s: is the str1.
 * @c: is the str2.
 * Return: - Null.
 */
char *_strchr(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			return (s + counter);
		}
	}
	if (s[counter] == '\0')
	{
	}
	return (NULL);
}
