#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

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

#endif
