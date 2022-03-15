#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 *@c : character to be checked.
 *
 * Return: 0 if !character 1 if character.
 *
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
