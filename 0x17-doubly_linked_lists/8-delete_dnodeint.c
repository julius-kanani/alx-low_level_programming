#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index.
 * @head: start of dlistint_t.
 * @index: position of node to be deleted in the dlistint_t.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int  nodes;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	nodes = 0;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	nodes = 0;
	while (nodes < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		nodes++;
	}

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
