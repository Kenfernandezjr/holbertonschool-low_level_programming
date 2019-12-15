#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that puts a node at the end of the linklist.
 * @head: head of the linklist.
 * @n:  elements.
 * Return:- testhead.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *testHead = *head;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (newNode);
	}

	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (testHead->next != NULL)
	{
		testHead = testHead->next;
	}

	newNode->prev = testHead;
	testHead->next = newNode;
	newNode->next = NULL;

	return (newNode);
}
