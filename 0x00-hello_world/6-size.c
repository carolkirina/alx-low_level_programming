#include <stdio.h>
/**
 * main - Entry point
 *
 * C program that prints the size of various types
 * warnings are allowed
 * Return: 0 (success)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of a long int: %d byte(s)\n", sizeof(c));
	printf("size of a long long int: %d byte(s)\n", sizeof(d));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	Return(0);
}

