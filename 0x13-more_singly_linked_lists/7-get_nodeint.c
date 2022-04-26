#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a (listint_t) list
 * @head: memory address to head
 * @index: index to return the nth node
 * Return: The nth node of a (listint_t) linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num_of_node;

	num_of_node = 0;
	while (head->next != NULL)
	{
		if (num_of_node == index)
			return (head);
		++num_of_node;
		head = head->next;
	}

	if (num_of_node == index)
		return (head);
	else
		return (NULL);
}


