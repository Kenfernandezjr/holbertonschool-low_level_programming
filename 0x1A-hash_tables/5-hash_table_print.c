#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print- main function to print hash table
 * @ht:-
 * Return:-
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *headNode;
	unsigned long int index = 0;

	if (ht == NULL)
	{

	}
	headNode = ht->array[index];
	while (index < ht->size)
	{

		while (headNode != NULL)
		{

			printf("'%s': '%s'", headNode->key, headNode->value);
			headNode = headNode->next;
		}
		index++;
	}
	printf("{%s}\n", ht->array[index]);
}
