#include "lists.h"

/**
 * list_len - Function that finds the length of struc.
 * @h: string of lists.
 * Return: - counter for lenght of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int counter;

	for (counter = 0; h ; counter++)
	{
		h = h->next;
	}
	return (counter);
}
