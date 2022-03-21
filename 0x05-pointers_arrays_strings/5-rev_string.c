#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: string to be reversed.
 * Return: void. Type is void.
 */

void rev_string(char *s)
{
	int nc, last_str, i, temp;

	nc = 0;
	while (s[nc] != '\0')
		++nc;

	last_str = nc - 1;
	i = 0;
	while (i < last_str)
	{
		temp = s[last_str];
		s[last_str] = s[i];
		s[i] = temp;
		++i;
		--last_str;
	}
}
