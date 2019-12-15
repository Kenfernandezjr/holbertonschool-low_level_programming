#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a the allocated memory.
 * @head: the beginning of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
