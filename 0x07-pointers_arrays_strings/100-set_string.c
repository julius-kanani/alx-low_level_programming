#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: ptr to a ptr of string.
 * @to: ptr to a char.
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
