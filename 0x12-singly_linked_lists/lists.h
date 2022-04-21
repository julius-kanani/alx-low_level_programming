#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - a singly linked list.
 * @str: string - (malloc'ed string)
 * @len: length of the string.
 * next: points to the next node.
 *
 * Description: Singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int n;
	struct list_s *next;
} list_t;

/* function prototypes that will work on the linked list list_t above */

size_t print_list(const list_t *h);	/* prints all elements of list_t */

#endif
