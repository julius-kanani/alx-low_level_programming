#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t list
 * @head: memory address of the head of the list.
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int sum, n;

	sum = 0;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			n = 0;
			n = head->n;
			sum += n;
			head = head->next;
		}
		n  = head->n;
		sum += n;
	}

	return (sum);
}

