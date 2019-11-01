#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_node - Function to add a new node.
 * @head: link list.
 * @str: string.
 * Return:-
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int counter;

	for (counter = 0; head; counter++)
	{
		printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	return (counter);
}
