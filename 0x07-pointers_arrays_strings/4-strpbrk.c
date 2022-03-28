#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - locates the first occurrence in the string s of any of
 * the bytes in the string accept.
 * @s: ptr to the string to locate first occurrence.
 * @accept: ptr to string to be compared by s.
 * Return: ptr to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *nb;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == 9)
		{
			++i;
			continue;
		}
		nb = NULL;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				nb = &s[i];
				break;
			}
			++j;
		}
		if (nb != NULL)
			break;
		++i;
	}

	return (nb);
}
