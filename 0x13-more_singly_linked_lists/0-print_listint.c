#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function for print list in numbers.
 * @h: head of the list.
 * Return:- return elements with the counter.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;
	const listint_t *pCurrentNode = h;

	while (pCurrentNode != 0)
	{
		printf("%d\n", pCurrentNode->n);
		pCurrentNode = pCurrentNode->next;
		counter++;
	}
	return (counter);
}
