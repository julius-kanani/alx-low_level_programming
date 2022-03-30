#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @str: string to be printed.
 * Return: Nothing.
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	_puts_recursion(++str);
}
