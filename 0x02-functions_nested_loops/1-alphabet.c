#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet, followed by a line.
 *
 * Return: returns nothing. Type is void.
 *
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
