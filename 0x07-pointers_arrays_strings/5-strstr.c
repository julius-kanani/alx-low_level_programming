#include "main.h"
#include <stddef.h>

/**
 * *_strstr - finds the first occurrence of the substr needle in the str
 * haystack. Terminating null bytes (\0) not compared.
 * @haystack: str to find first occurrence of substr.
 * @needle: substr to find its first occurrence in str.
 * Return: ptr to the beginning of the located str, or NULL if the
 * substr is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == 32 || haystack[i] == 9)
		{
			++i;
			continue;
		}
		ptr = NULL;
		j = 0;
		if (haystack[i] == needle[j])
		{
			ptr = &haystack[i];
			break;
		}
		++i;
	}

	return (ptr);
}
