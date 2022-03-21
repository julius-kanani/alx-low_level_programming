#include "main.h"

/**
 * _puts - prints a string.
 * @str: string to be printed to the std out.
 * Return: void. Type is void.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
