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

	if (ht == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		return (0);
	}
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	insert_node(newNode, ht);

	return (1);

}

/**
 * insert_node - main function for inserting a newNode.
 * @node: - node to insert.
 * @htable: - hash table and structure.
 */
void insert_node(hash_node_t *node, hash_table_t *htable)
{
	unsigned long int index = key_index((unsigned char *)node->key, htable->size);
	hash_node_t *temp = htable->array[index];

	if (htable->array[index] != NULL)
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, node->key) == 0)
			{
				break;
			}
			temp = temp->next;
		}
		if (temp == NULL)
		{
			node->next = htable->array[index];
			htable->array[index] = node;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(node->value);
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	else
	{
		htable->array[index] = node;
	}
}
