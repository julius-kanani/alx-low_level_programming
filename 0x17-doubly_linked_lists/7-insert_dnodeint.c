#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 * @h: head, start of a dlistint_t list.
 * Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;
	while (h != NULL)
	{
		++number_of_elements;	/* keeps count of nodes */

		h = h->next;	/* moves to the next node */
	}

	return (number_of_elements);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: ptr to head of start of a dlistint_t list.
 * @idx: position to insert a new node.
 * @n: data to be inserted.
 * Return: the address of a new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int number_of_nodes = 0;
	dlistint_t *new = NULL;

	number_of_nodes = dlistint_len(*h);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == number_of_nodes)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (idx < number_of_nodes)
	{
		dlistint_t *current = NULL;
		unsigned int num_of_nodes;

		current = *h;
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		num_of_nodes = 0;
		while (current != NULL)
		{
			if (idx == num_of_nodes)
			{
				new->prev = current->prev;
				current->prev->next = new;
				new->next = current;
				current->prev = new;
				return (new);
			}
			current = current->next;
			++num_of_nodes;
		}
	}
	return (new);
}
