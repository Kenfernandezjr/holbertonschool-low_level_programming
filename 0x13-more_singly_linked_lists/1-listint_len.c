#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - function to count the length of a list.
 * @h: the head of the list.
 * Return:- the counter returns the element.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
