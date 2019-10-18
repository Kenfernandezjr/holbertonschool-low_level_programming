#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function for project 2
 * @nmemb: - unsigned int.
 * @size: - unsigned int.
 * Return: - null/it's void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;

	i = malloc(sizeof(size) * nmemb);

	if (nmemb == 0)
	{

		return(NULL);
	}
	if (size == 0)
	{
		return(NULL);
	}
	for (i = 0; i < size; i++)
	{
		return (i);
	}
}
