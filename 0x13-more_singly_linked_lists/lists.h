#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node.
 *
 * Description: singly linked list node structure.
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes that act on a (listint_s) list.*/

size_t print_listint(const listint_t *h);	/* prints all the elements of a (listint_t) list.*/

size_t listint_len(const listint_t *h);	/* returns the length of a (listint_t) list. number of elements.*/

listint_t *add_nodeint(listint_t **head, const int n);	/* adds a new node at the beginning of a (listint_t) list. */

listint_t *add_nodeint_end(listint_t **head, const int n);	/* adds a new node at the end of a (listint_t) list. */

void free_listint(listint_t *head);	/*frees a (listint_t) list */

void free_listint2(listint_t **head);	/* frees a (listint_t) list, sets the head to NULL. */

int pop_listint(listint_t **head);	/* deletes the head node of a (listint_t) linked list and returns the head node's data (n). */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);	/* returns the nth node of a listint_t linked list. */

int sum_listint(listint_t *head);	/* returns the sum of all data (n) of a (listint_t) linked list. */

#endif
