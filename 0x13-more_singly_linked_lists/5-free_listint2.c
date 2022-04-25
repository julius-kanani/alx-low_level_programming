#include "lists.h"

/**
 * free_listint2 - frees a (listint_t) list
 * @head: address of the pointer to head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		listint_t *curr_head = NULL, *temp_head = NULL;

		curr_head = *head;
		while (curr_head->next != NULL)
		{
			temp_head = curr_head;
			curr_head = temp_head->next;
			free(temp_head);
		}
		*head = NULL;
		free(curr_head);
	}
}
