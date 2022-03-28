#include "main.h"

/**
 * *_memset - fills first n bytes of the memory area pointed by s, with
 * the constant byte b.
 * @str: ptr to the memory area.
 * @b: constant byte to fill memory with.
 * @n: bytes of the memory area to be filled.
 * Return: pointer to str.
 */

char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		str[i] = b;
		++i;
	}
	return (str);
}
