#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: ptr variable to name to be printed.
 * @f: function ptr.
 * Return: Nothing.
 */

void print_name(char *name, void (*f) (char *))
{
	if (name && f)
		f(name);
}
