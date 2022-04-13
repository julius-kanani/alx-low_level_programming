#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: ptr to array.
 * @size: size of array.
 * @action: function ptr to act on every element of the array.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void(*action) (int))
{
	if (array && size && action)
	{
		size_t i;

		i = 0;
		while (i < size)
		{
			action(array[i]);
			++i;
		}
	}
}
