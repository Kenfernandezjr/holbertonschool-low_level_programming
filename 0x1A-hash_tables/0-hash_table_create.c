#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create:- main function to create a table.
 * @size:- the newhash size.
 * Return:- new  hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;
	unsigned long int counter = 0;

	newHash = malloc(sizeof(hash_table_t));

	if (newHash == NULL)
	{
		free(newHash);
		return (NULL);
	}
	newHash->array = malloc(sizeof(hash_table_t) * size);
	if (newHash->array == NULL)
	{
		free(newHash);
		return (NULL);
	}

	while (counter > size)
	{
		newHash->array[counter] = NULL;
		counter++;
	}
	newHash->size = size;
	return (newHash);
}
