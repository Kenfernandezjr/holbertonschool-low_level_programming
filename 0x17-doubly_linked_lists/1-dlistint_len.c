#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - Main function for printing list.
 * @h: head of the linklist/ first node.
 * Return:- elements to show count.
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int elements;
	const dlistint_t *node = h;

	for (elements = 0; node != NULL; elements++)
	{
		node = node->next;
	}
	return (elements);
}
