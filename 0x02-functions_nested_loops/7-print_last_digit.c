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

	n = n >= 0 ? n : n * -1;

	last_digit = n % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
