#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: pointer to destination string.
 * @src: pointer to src string.
 * @n: limit of copying. the number of bytes.
 * Return: pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))	/* cpy src to dest */
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)	/* if src is less than no. of bytes to be copied. */
	{
		dest[i] = '\0';	/* fill with end of string '\0' */
		++i;
	}

	return (dest);
}
