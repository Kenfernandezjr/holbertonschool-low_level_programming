#include "holberton.h"
#include <stdlib.h>


/**
 * string_nconcat-function for project.
 * @s1: string 1
 * @s2: string 2
 * return:- s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int b = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (n >= i)
	{
		malloc(sizeof(char) * (i + b + 1));
	}
	if (n < i)
	{
		malloc(sizeof(char) * (n + b + 1));
	}
	else
	{
		return (NULL);
	}
	for (; s1[b]; b++)
		;
	for (; i < n; i++)
	{
		s1[b] = s2[i];
	}
	return (s1);
}
