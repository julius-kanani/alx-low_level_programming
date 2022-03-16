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
	else
		last_digit = (n % 10) * -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
