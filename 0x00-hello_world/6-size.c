#include <stdio.h>

/**
 * main - Entry point
 * program that prints the size of various types
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;
	int x;
	long int y;
	long long int z;
	float n;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(n));
	return (0);

}
