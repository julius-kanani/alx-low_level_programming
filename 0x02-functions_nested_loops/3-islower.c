#include "main.h"

/**
 * _islower - checks for a lowercase character.
 *
 *@c : character to go through the check.
 *
 * Return: 0 if !lowercase and 1 if lowercase.
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
