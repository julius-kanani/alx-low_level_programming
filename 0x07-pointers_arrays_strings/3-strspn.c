#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: ptr to the string.
 * @accept: ptr to str to accept.
 * Return: number of bytes in the init segment of s. which consist only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, nb, length;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == 9)
		{
			++i;
			continue;
		}

		nb = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				++nb;
			++j;
		}
		if (nb == 0)
		{
			length = i;
			break;
		}
		++i;
	}

	return (length);
}
