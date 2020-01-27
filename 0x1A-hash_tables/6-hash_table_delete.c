#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - main function to delete hash table
 * @ht:- hash table structure
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp;
	hash_node_t *headNode;

	while (index < ht->size)
	{

		headNode = ht->array[index];
		while (headNode != NULL)
		{
			temp = headNode->next;
			free(headNode->key);
			free(headNode->value);
			free(headNode);
			headNode = temp;
		}
		index++;
	}
	free(ht->array);
	free(ht);

}
