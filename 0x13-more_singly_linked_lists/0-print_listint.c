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
	if (h != NULL)
	{
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			++num_of_nodes;
			h = h->next;
		}
		printf("%d\n", h->n);
		++num_of_nodes;
	}

	return (num_of_nodes);
}
