#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array of pointers.
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			++j;
		}
		_putchar(10);
		++i;
	}
}
