#include "main.h"

/**
 * print_diagonal - prints a line n chars long.
 * @n: number of \.
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar(11);
			_putchar('\n');
		}
	}
}
