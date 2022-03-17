#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: input.
 *
 * Return: 1 if c is a digit
 * 0 otherwise.
 */

int _isdigit(int c)
{
	int test = 0;

	if ((c >= '0') && (c <= '9'))
		test = 1;

	return (test);
}
