#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98 from anywhere.
 *
 * @n : number to start from.
 *
 * Return: nothing. Type is void.
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
