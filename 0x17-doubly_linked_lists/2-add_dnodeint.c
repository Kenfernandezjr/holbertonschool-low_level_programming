#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - main function adding the new node.
 * @head:- head of the linklist/ the first node
 * @n: is the elements.
 * Return: dereferenced head.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (newNode);
	}

	newNode->n = n;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
