#include "main.h"

/**
 * jack_bauer - prints every minute 00:00 to 23:59.
 *
 * Return: nothing. Type is void.
 *
*/

void jack_bauer(void)
{
	int i, j, k, l, s_hr;

	i = 0;
	s_hr = 10;

	while (i < 3)
	{
		if (i == 2)
			s_hr = 4;
		j = 0;
		while (j < s_hr)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					++l;
				}
				++k;
			}
			++j;
		}
		++i;
	}
}
