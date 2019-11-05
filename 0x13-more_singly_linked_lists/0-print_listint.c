#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function for print list in numbers.
 * @h: yea
 *
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
