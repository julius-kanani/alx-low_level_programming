#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: pointer to dest.
 * @src: pointer to src.
 * @n: number of bytes to be copied from src to dest.
 * Return: ptr to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}

	return (dest);
}
