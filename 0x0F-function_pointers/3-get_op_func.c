#include "3-calc.h"

/**
 * get_op_func - function ptr to the correct func to perform user ops.
 * @s: ptr to operator +, -, %, *, /.
 * Return: function ptr to correct function to perform user ops.
 */

int (*get_op_func(char *s)) (int, int)
{
	op_t op_functions[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	i = 0;
	while (i < 5)
	{
		if (s[0] == op_functions[i].op[0])
			return (op_functions[i].f);
		++i;
	}

	return (NULL);
}
