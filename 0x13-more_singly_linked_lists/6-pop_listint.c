#include "lists.h"

/**
 * pop_listint - deletes the head node a (listint_t) linked list
 * @head: memory address to ptr to head to pop
 * Return: The heads node's data (n)
 */

int pop_listint(listint_t **head)
{
	int n;

	n = 0;
	if (head != NULL)
	{
		listint_t *temp_head = NULL;

		temp_head = *head;
		*head = temp_head->next;
		n = temp_head->n;
		free(temp_head);
	}

	return (n);
}

