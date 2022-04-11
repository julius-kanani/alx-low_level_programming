#include <stdio.h>
#define FILENAME __FILE__

/**
 * main - print name of file it was compiled from.
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", FILENAME);

	return (0);
}
