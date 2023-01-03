#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
#include <stdio.h>

/* Searches for value in an array of integers using the Linear search algo.*/
int linear_search(int *array, size_t size, int value);

/* Searches for a value in a sorted array of integers using Binary Search. */
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS.H */
