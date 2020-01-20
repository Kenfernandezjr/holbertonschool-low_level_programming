#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - main function that gives you the index of a key.
 * @size:- size of the size.
 * @key:- key/value.
 * Return:- returns the index at which the key/value pair.
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = (hash_djb2((unsigned char *)key) % size);

	return (value);
}
