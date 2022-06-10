#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* prints all the elements of a dlistint_t list. */
size_t print_dlistint(const dlistint_t *h);

/* returns the number of elements in a linked dlistint_t list. */
size_t dlistint_len(const dlistint_t *h);

/* adds a new node at the beginning of a dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* adds a new node at the end of a dlistint_t list. */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* frees a dlistint_t list */
void free_dlistint(dlistint_t *head);

/* returns the nth node of a dlistint_t linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* returns the sum of all the data(n) of a dlistint_t linked list */
int sum_dlistint(dlistint_t *head);

/* inserts a new node at a given position. */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* deletes the node at the given index of a dlistint_t linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
