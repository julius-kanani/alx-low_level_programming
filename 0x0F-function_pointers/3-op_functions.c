#include "3-calc.h"

/**
 * op_add - calculate sum of two numbers.
 * @a: integer one.
 * @b: integer two.
 * Return: sum of two numbers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers.
 * @a: integer one.
 * @b: integer two.
 * Return: Difference of two numbers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate product of two numbers.
 * @a: integer one.
 * @b: integer two.
 * Return: Product of two numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers.
 * @a: integer one.
 * @b: integer two.
 * Return: Quotient.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculate remainder of a division.
 * @a: integer one.
 * @b: intger two.
 * Return: Remainder.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

