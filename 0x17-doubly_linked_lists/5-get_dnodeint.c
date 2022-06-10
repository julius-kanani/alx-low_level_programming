#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list.
 * @head: memory address for head of list.
 * @index: position for the node to be returned.
 * Return: Nth node of a dlistint_t linked list of the given index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number_of_nodes;

	number_of_nodes = 0;
	while (head != NULL)
	{
		if (number_of_nodes == index)
			return (head);

		head = head->next;
		++number_of_nodes;
	}

	return (NULL);
}
