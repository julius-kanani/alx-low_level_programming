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

	puts("Size of a char: %lu bytes(s)", (unsigned long)sizeof(ch));
	puts("Size of an int: %lu byte(s)", (unsigned long)sizeof(x));
	puts("Size of a long int: %lu bytes(s)", (unsigned long)sizeof(y));
	puts("Size of a long long int: %lu bytes(s)", (unsigned long)sizeof(z));
	puts("Size of a float: %lu bytes(s)", (unsigned long)sizeof(n));
	return (0);

}
