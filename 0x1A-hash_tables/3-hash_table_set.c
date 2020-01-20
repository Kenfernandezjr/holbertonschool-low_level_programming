#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - main function adds an element to the hash table.
 * @ht:- hash table to add or update.
 * @key:- key is the key.
 * @value:- is associated with the key.
 * Return:- Return the element.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	int index;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL)
	{
		return (0);
	}

	index = (key_index((const char *)key) ht->size);

	newNode = ht->array[index];

	while (newNode != NULL)
	{
		newNode = newNode->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		return (0);
	}

}
