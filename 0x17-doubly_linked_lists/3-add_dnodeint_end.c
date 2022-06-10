#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: ptr to head of dlistint_t
 * @n: data to be added.
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *current = NULL;

	current = *head;	/* cursor to point to current head */

	/* create the new double linked node */
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* check if head exists */
	if (*head == NULL)
	{
		new->prev = (*head);
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}

	return (new);

}
