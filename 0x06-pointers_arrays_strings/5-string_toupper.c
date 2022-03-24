#include "main.h"

/**
 * *string_toupper - convert lowercase char to uppercase.
 * @str: pointer to string to be converted to uppercase.
 * Return: str with uppercase characters.
 */

char *string_toupper(char *str)
{
	int strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		if ((str[strlen] >= 97) && (str[strlen] <= 122))
			str[strlen] -= 32;
		++strlen;
	}

	return (str);
}
