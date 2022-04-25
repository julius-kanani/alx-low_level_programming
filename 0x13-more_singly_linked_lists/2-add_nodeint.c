#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a (listint_t) list
 * @head: memory address that points to the head node of a list
 * @n: integer for listint_t->n
 * Return: memory address that points to the head of a list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head != NULL)	/*address of head given */
	{
		/* create a new node */
		listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		/* fill in the new node */
		new_node->n = n;
		new_node->next = *head;

		/* head to point to new node */
		*head = new_node;
	}

	return (*head);
}
