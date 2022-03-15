#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: number to get its absolute value.
 *
 * Return: Returns absolute value of the number.
 *
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (n * -1);
}
