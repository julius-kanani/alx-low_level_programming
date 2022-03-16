#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, next = 0;

	for (i = 0; i < 98; i++)
	{
		printf("%lu, ", x);
		next = x + y;
		x = y;
		y = next;
	}
	return (0);
}
