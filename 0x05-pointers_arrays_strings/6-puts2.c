#include "main.h"

/**
 * puts2 - print character of a string, starting with the first character.
 * @str: string to be printed.
 * Return: nothing. Type is void.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		++i;
	}
	_putchar('\n');
}
