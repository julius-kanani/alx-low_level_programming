#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_s list.
 * @h: head to start of list.
 * Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;
	while (h != NULL)
	{
		++number_of_elements;	/* keep count of nodes */

		h = h->next;	/* move to the next node */
	}

	return (number_of_elements);
}
