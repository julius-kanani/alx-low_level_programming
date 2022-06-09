#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_s list.
 * @h: head to start of list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);	/* print node data */
		++number_of_nodes;	/* count the node */

		h = h->next;	/* move to the next node */
	}

	return (number_of_nodes);
}
