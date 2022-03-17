#include "main.h"

/**
 * _isupper - checks if letters are uppercase.
 * @c: input.
 *
 * Return: 1 if c is uppercase
 * 0 otherwise.
 */

int _isupper(int c)
{
	int test = 0;

	if ((c >= 'A') && (c <= 'Z'))
		test = 1;

	return (test);
}
