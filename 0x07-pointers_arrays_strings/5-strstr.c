#include "main.h"
#include <stddef.h>

/**
 * _strcmp - compares strings
 * @s1: first str
 * @s2: second str
 * Return: their diff or (0)
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	return (0);
}

/**
 * _strstr - searches for substring.
 * @haystack: pointer to checked string
 * @needle: substring
 *
 * Return: a pointer to the first byte of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int counter;

	for (counter = 0; haystack[counter] != '\0' ; counter++)
	{
		if (_strcmp((haystack + counter), needle) == 0)
			return (haystack + counter);
	}
	return (NULL);
}
