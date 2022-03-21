#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string to be printed in reverse.
 * Return: void. Type is nothing.
 */

void print_rev(char *s)
{
	int nc, last_str;

	nc = 0;
	while (s[nc] != '\0')
	{
		++nc;
	}

	last_str = nc - 1;
	while (last_str >= 0)
	{
		_putchar(s[last_str]);
		--last_str;
	}
	_putchar('\n');
}
