#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: memory address to ptr that contains memory address for head
 * @idx: index to insert new node in the listint_t
 * @n: integer to be added
 * Return: memory address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *curr_node, *temp_node;
	unsigned int index;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	curr_node = *head;

	if (curr_node == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		index = 0;
		while (curr_node->next != NULL)
		{
			if (index == idx)
			{
				temp_node->next = new_node;
				new_node->next = curr_node;
			}

			else if ((index + 1) == idx)
			{
				temp_node = curr_node;
			}

			curr_node = curr_node->next;
			++index;
		}
		if (new_node->next == NULL)
		{
			curr_node->next = new_node;
		}
	}

	return (new_node);
}
