#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list.
 * @h: memory address of head of (listint_t) list.
 * Return: the number of nodes in a (listint_t) list.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int num_of_nodes;

	num_of_nodes = 0;
	if (h != NULL)	/* is the address given */
	{
		while (h->next != NULL)	/* curr node has next address */
		{
			printf("%d\n", h->n);
			++num_of_nodes;	/* increment number of nodes */
			h = h->next;	/* go to next node */
		}
		printf("%d\n", h->n);	/* print last node */
		++num_of_nodes;	/* add last node */
	}

	return (num_of_nodes);
}
