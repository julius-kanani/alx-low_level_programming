#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: memory address for head, start of list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
