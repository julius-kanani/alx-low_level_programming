#include "main.h"

/**
 * _strncat - concatenates two strings with n specified.
 * @dest: pointer to destination string.
 * @src: pointer to src string.
 * @n: number of bytes of src to be concatenated with dest.
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0') /* get length of dest string */
		++dest_len;
	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[dest_len] = src[i];
		++i;
		++dest_len;
	}
	dest[dest_len] = '\0';

	return (dest);
}
