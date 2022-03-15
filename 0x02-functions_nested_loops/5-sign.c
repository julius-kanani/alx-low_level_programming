#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: number for sign to be checked.
 *
 * Return: 0 if n = 0 1 if n > 1 -1 if n < 0.
 *
*/

int print_sign(int n)
{
	int result = 0;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}

	return (result);
}
