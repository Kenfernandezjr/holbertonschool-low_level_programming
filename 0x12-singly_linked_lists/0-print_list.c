#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - is the function that will print linklist.
 * @h: string that points to the list.
 * Return:- the pointer.
 */

size_t print_list(const list_t *h)
{
	unsigned int counter;

	for (counter = 0; h; counter++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
