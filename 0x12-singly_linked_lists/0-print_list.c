#include "main.h"

/**
 * print_list - prints elements of a list_t list.
 * @h: ptr to the head of the linked list.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	int num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			++num_nodes;
			break;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		++num_nodes;
	}

	return (num_nodes);
}

}
