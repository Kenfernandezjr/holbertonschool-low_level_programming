#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_dlistint - Main function for printing list.
 * @h: head of the linklist/ first node.
 * Return:- elements to show count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int elements;
	const dlistint_t *node = h;

	for (elements = 0; node != NULL; elements++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	return (elements);
}
