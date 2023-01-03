#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers.
 * @array: ptr to the first element of the array to serach in.
 * @size: The number of elements in array.
 * @value: The value to search for in the array.
 * Return: The index where the value is located.
 * if value is not present in array or if array is NULL, return -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	left = 0;
	right = size - 1;

	while (left <= right && array != NULL)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		mid = ((left + right) / 2);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
