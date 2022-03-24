#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: A value based on the comparison outcome.
 */

int _strcmp(char *s1, char *s2)
{
	int i, compare_value;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		++i;
	compare_value = s1[i] - s2[i];

	return (compare_value);
}
