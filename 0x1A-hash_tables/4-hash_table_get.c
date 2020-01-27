#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - main function to get value of hash table.
 * @ht: - hash table.
 * @key: - key/value.
 * Return:- value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;
	char *word;

	if (ht == NULL)
	{
		return (NULL);
	}
	word = strdup(key);
	index = key_index((unsigned char *)word, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(word, temp->key) == 0)
		{
			break;
		}
		temp = temp->next;
	}
	free(word);
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp->value);
}
