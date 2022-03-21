#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to find its length.
 * Return: Returns the length of a given string.
 */
int _strlen(char *s)
{
	int nc;

	nc = 0;
	while (*s != '\0')
	{
		++nc;
		++s;
	}

	return (nc);
}
