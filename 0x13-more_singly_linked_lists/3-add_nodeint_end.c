#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a (listint_t) list
 * @head: memory address to the head of a (listint_t) list
 * @n: integer to be added to a new node
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	
	if (head != NULL)
	{
		new_node = (listint_t *) malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		/* fill in new_node */
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
			*head = new_node;
		else
		{
			listint_t *last_node = *head;

			while (last_node->next != NULL)
				last_node = last_node->next;
			last_node->next = new_node;
		}
	}

	return (new_node);
}

