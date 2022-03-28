#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square.
 * @a: ptr to array.
 * @size: size of array.
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum_d1, sum_d2;

	sum_d1 = sum_d2 = 0;

	j = (size * size) - 1;

	i = 0;
	while (i <= j)
	{
		sum_d1 += a[i];
		i += (size + 1);
	}

	i = (size - 1);
	while (i < j)
	{
		sum_d2 += a[i];
		i += (size - 1);
	}

	printf("%d, %d\n", sum_d1, sum_d2);
}
