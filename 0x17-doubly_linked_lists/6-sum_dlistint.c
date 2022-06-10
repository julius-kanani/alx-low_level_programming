#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a dlistint_t linked list.
 * @head: memory address of  start of dlistint_t list.
 * Return: Sum of all the data(n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		int data;
		data = head->n;
		sum += data;

		head = head->next;
	}

	return (sum);
}
