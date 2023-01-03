#include "search_algos.h"

/**
 * linear_search - searches for a value in array of integers linearly.
 * @array: ptr to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to serach for.
 * Return: The first index where the value is located.
 * If value is not present in array, or if array is NULL, return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (array != NULL && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
