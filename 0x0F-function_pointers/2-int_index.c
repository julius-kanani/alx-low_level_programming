#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @size: number of elements in the array.
 * @cmp: ptr to a function to be used to compare value.
 * @array: ptr to array.
 * Return: Index of the first element. If no match return -1.
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int result = -1;
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (result);

		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
			{
				result = i;
				break;
			}
			++i;
		}
	}
	return (result);
}
