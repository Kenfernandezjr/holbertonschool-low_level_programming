#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - main function.
 * @head:- is the beginning of the node.
 * Return:- n is the sum of the linklist.
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;
	dlistint_t *tempHead = head;

	while (tempHead != NULL)
	{
		n = tempHead->n + n;
		tempHead = tempHead->next;
	}
	return (n);
}
