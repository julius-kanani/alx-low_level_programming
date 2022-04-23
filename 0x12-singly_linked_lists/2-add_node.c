#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - find the length of a string.
 * @str: string to find its length.
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
 * add_node - adds a new node to the beginning of a (list_t) list.
 * @head: a ptr to the head of a list.
 * @str: str to be be added to the linked list.
 * Return: address of the new Linked_list.
 */

list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL && str != NULL)	/* if address of head and str is given */
	{
		list_t *temp_h = (list_t *) malloc(sizeof(list_t)); /* create a temp head */

		if (temp_h == NULL)	/* if no memory allocated */
			return (*head);	/* return address of head */

		temp_h->str = strdup(str);	/* fill in the temp head */
		temp_h->len = _strlen(str);
		temp_h->next = *head;	/* give address of the next list_t */
				
		*head = temp_h;	/* insert at beginning */
	}

	return (*head);
}
