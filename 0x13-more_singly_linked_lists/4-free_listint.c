#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a (listint_t) list
 * @head: ptr to start of the list.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		listint_t *temp_head = NULL;

		while (head->next != NULL)
		{
			temp_head = head;
			head = temp_head->next;
			free(temp_head);
		}
		free(head);
	}
}
