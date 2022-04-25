#include "lists.h"

/**
 * listint_len - returns the number of elements in a (listint_t) list
 * @h: address of the head of (listint_t) list
 * Return: The number of elements in a (listint_t) list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int num_of_elements;

	num_of_elements = 0;
	if (h != NULL)	/* is address given */
	{
		while (h->next != NULL)
		{
			++num_of_elements;	/* increment no of nodes */
			h = h->next;	/* point to next node */
		}
		++num_of_elements;	/* incremment last node */
	}

	return (num_of_elements);
}
