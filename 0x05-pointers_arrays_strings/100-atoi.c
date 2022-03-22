#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to be converted into an integer.
 * Return: returns an integer converted from a string.
 */

int _atoi(char *s)
{
	int index, index_2;
	unsigned int result;
	int sign = 1;
	char now;

	index = 0;
	result = 0;
	while (*(s + index) != '\0')
	{
		now = *(s + index);
		if (now == '-')
			sign *= -1;
		if (now >= '0' && now <= '9')
		{
			index_2 = index;
			while (*(s + index_2) > 47 && *(s + index_2) < 58)
			{
				result = (result * 10) + *(s + index_2) - '0';
				++index_2;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		result *= sign;

	return (result);
}
