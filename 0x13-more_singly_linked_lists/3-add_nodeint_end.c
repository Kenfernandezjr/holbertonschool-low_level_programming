#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - function creates a node at the end.
 * @head: the beginning of this is link.
 * @n: int.
 * Return:- return currentNode for the elements.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currentNode = (*head);

	if (!(*head))
	{
		(*head) = (listint_t *)malloc(sizeof(listint_t));
		(*head)->next = NULL;
		(*head)->n = n;
		return (*head);
	}

	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = (listint_t *)malloc(sizeof(listint_t));
	(currentNode->next)->n = n;
	(currentNode->next)->next = NULL;

	return (currentNode->next);
}
