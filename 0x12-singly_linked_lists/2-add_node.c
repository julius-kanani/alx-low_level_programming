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
	list_t *temp_head;

	temp_head = malloc(sizeof(list_t));

	if (temp_head == NULL || str == NULL)
		return (NULL);

	/** fill temp_head */
	temp_head->str = strdup(str);
	temp_head->len = _strlen(str);
	temp_head->next = *head;

	*head = temp_head;

	return (*head);
}
