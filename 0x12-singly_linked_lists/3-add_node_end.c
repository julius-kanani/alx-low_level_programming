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
	list_t *new_node = NULL, *prev_node = NULL;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)  /* if the list has no beginning */
		*head = new_node;
	else    /* if the list has a beginning */
	{
		prev_node = *head;  /* assign the given address to the previous list node */

		while (prev_node->next != NULL)
		{	/* while the previous node has a link to the next node */
			prev_node = prev_node->next;
		}

		prev_node->next = new_node; /* assign it as the last node */
	}

	return (new_node);
}
