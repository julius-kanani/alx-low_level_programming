#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string.
 * @s: string for character locate operation.
 * @c: character to be located in s.
 * Return: ptr to the first occurrence of the character c in s. NULL if
 * the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		++i;
	}
	return (ptr);
}
