#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - main function.
 * @head:- is the start of the linklist.
 * @index:- is the nth number
 * Return:- returning the node, tempHead.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *tempHead = head;
	unsigned int counter = 0;

	while (counter < index)
	{
		if (tempHead == NULL)
		{
			return (NULL);
		}
		tempHead = tempHead->next;
		counter++;
	}
	return (tempHead);
}
