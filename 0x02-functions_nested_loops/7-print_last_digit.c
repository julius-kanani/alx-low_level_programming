#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: parameter used.
 *
 * Return: returns a number.
 *
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
		last_digit = n % 10;
	else if (n < 0)
	{
		n = -1 * n;
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
