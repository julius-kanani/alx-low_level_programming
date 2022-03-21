#include "main.h"

/**
 * swap_int - swaps value of two integers.
 * @a: first pointer to value to be swapped.
 * @b: second pointer to value to be swapped.
 * Return: Nothing. Type is void.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
