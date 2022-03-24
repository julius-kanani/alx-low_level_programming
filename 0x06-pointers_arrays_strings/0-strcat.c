#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string where the new string will be concatenated.
 * @src: string that will be joined to the destination str.
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')	/* get length of dest string */
		++dest_len;
	
	i = 0;
	while (src[i] != '\0')	/* append src to dest */
	{
		dest[dest_len] = src[i];
		++i;
		++dest_len;
	}

	dest[dest_len] = '\0';

	return (dest);
}
