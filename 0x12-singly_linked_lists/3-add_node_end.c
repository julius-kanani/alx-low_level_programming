#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - find the length of a string.
 * @str: string to find its string.
 * Return: length of a string.
 */

size_t _strlen(const char *str)
{
	int strl;

	strl = 0;
	while (*str != '\0')
	{
		++strl;
		++str;
	}

	return (strl);
}

/**
 * add_node_end - adds a new node at end of a (list_t) list.
 * @head: address of the head of a (list_t) list.
 * @str: string to be added to node of the (list_t) list.
 * Return: address of the new linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head, *last_node;

	if (head != NULL && str != NULL)	/* if address of head and str is given. */
	{
		new_head = (list_t *) malloc(sizeof(list_t));

		if (new_head == NULL)	/* if memory allocation was not successful */
			return (*head);

		new_head->str = strdup(str);
		new_head->len = _strlen(str);
		new_head->next = NULL;

		if (*head == NULL)
			*head = new_head;	/* start of list_t */

		else	/* if list_t already contains a head */
		{

			last_node = *head;	/* point head to last node */

			while (last_node->next != NULL)	/* last nod not null */
				last_node = last_node->next; /* address to the next node */

			last_node->next = new_head; /* address to last node */
		}
	}

	return (new_head);
}
